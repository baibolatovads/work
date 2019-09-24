import requests, random, csv, time, re, psycopg2
from bs4 import BeautifulSoup

def get_html(url):
	headers = {
	'Upgrade-Insecure-Requests': '1',
	'User-Agent' :'Mozilla/5.0 (x6411; Ubuntu; Linux x86_64; rv:60.0) Gecko/20100101 Firefox/60.0'}
	r = requests.get(url, headers=headers)
	# time.sleep(0.5)
	# print('request')
	html = r.text
	return html
	


data_dict = {}

def get_true_category(category_name):
	global data_dict
	if data_dict.get(category_name) is None:
		return None, None
	true_category_name, true_category_id = data_dict.get(category_name)
	return true_category_name, true_category_id

with open('domsad_cats.csv', 'r', encoding='utf-8') as csvfile:
	data_dom = csv.reader(csvfile)
	for idx, item in enumerate(data_dom):
		data_dict[item[0]] = item[1], item[2]

def get_info(prod_link, prod_name, category_name, category_id, brand_name, subbrand_name, price):
	soup_prod = BeautifulSoup(get_html(prod_link), 'html.parser')

	description = ''

	try:
		for x in soup_prod.find(class_="detail_text").contents:
			description = (x.get_text().strip().strip('\n').replace('	', ' ').replace('  ', '').replace('\\','/').replace('\xa0', ' ').replace('\xad', '').strip())
			print("GOT THE DESCRIPTION")
			break
	except AttributeError:
		print("DESCRIPTION IS EMPTY")

	# print(description)

	media_url = {"images": []}
	for i in soup_prod.find_all(class_="popup_link"):
		if i['href'][0] == '/':			
			image_url = 'https://domsad.kz' + i['href']
			media_url["images"].append(image_url)
	# print(media_url)

	# print(soup_prod.find(class_="prices_block").prettify())

	feature_group_name = 'Общие характеристики'
	
	terms = []
	f_list = soup_prod.find(class_="wraps char_inner_wrapper")
	if f_list is not None:
		for ff in f_list.find_all(itemprop="additionalProperty"):
			f_name = ff.find(class_="char_name").text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip().replace("'", 'дюйм').replace('"', 'дюйм')
			f_value = ff.find(class_="char_value").text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip().replace("'", 'дюйм').replace('"', 'дюйм')
			f_temp = {'name': f_name, 'value': f_value}
			terms.append(f_temp)
	elif soup_prod.find(class_="props props_list") is not None:
		f_list = soup_prod.find(class_="props props_list")
		for ff in f_list.find_all(class_="prop"):
			f_name = ff.find(class_="name").text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip().replace("'", 'дюйм').replace('"', 'дюйм')
			f_value = ff.find(class_="value").text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip().replace("'", 'дюйм').replace('"', 'дюйм')
			f_temp = {'name': f_name, 'value': f_value}
			terms.append(f_temp)
	else:
		pass
	if subbrand_name != '':
		terms.append({'name': 'Суббренд', 'value': subbrand_name})

	features = {"images": [{'feature_group_name': feature_group_name, 'terms': terms}]}

	print(prod_name, '\nPROD_NAME\n')
	print(brand_name, '\nBRAND\n')
	print(subbrand_name, '\nSUBBRAND\n')
	print(category_name, '\nCATEGORY NAME\n')
	print(category_id, '\nCATEGORY ID\n')
	print(price, '\nPRICE\n')
	print(media_url, '\nMEDIA URL\n')
	print(description, '\nDESCRIPTION\n')
	print(str(features).replace('"', 'дюйм'), '\nFEATURES\n')
	# print(price)

	main_db_change('insert into domsad_db (product_name, brand_name, category_name, category_id, price, media_url, description, features) values (%s, %s, %s, %s, %s, %s, %s, %s)', (prod_name, brand_name, category_name, category_id, price, str(media_url).replace("'", '"'), description, str(features).replace("'", '"')))


def parser(soup__, category_name, category_id):
	global p_ok
	if len(soup__.find_all(class_="list_item_wrapp item_wrap item")) > 0:
		for temp_soup in soup__.find_all(class_="list_item_wrapp item_wrap item"):
			prod_link = 'https://domsad.kz' + temp_soup.find(class_="item-title").a['href']
			prod_name = temp_soup.find(class_="item-title").a.span.text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip()
			print(prod_link)
			print(prod_name)

			if prod_name == 'Лейка для душа GROHE Vitalio Rain (26107000)':
				p_ok = True

			if p_ok:
				pass
			else:
				continue

			brandy = temp_soup.find(class_="props_list prod")
			brand_name = ''
			subbrand_name = ''
			if brandy is not None:	
				for br in brandy.find_all("tr"):
					if br.find_all("td")[0].text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip() == 'Бренд':
						brand_name = br.find_all("td")[1].text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip()
					if br.find_all("td")[0].text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip() == 'Суббренд':
						subbrand_name = br.find_all("td")[1].text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip()

			# print(brand_name)
			# print(subbrand_name)

			price = ''
			try:	
				ssss = temp_soup.find(class_="price", id=re.compile(".+"))
				# print(temp_soup.find_all(class_=re.compile("price")))
				for p in ssss.find(class_="values_wrapper").text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip():
					if p.isdigit():
						price += p
			except AttributeError:
				if temp_soup.find(class_="price_value") is not None:	
					for p in temp_soup.find(class_="price_value").text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip():
						if p.isdigit():
							price += p
			if len(price) == 0:
				price = -1
			else:
				price = int(price)
			get_info(prod_link, prod_name, category_name, category_id, brand_name, subbrand_name, price)

def page_parser(child_url, category_name, category_id):



	soup_soup = BeautifulSoup(get_html(child_url), 'html.parser')

	print(child_url)
	print()
	parser(soup_soup, category_name, category_id)




	soup_page = soup_soup
	if soup_page.find(class_="flex-next") is not None and soup_page.find(class_="flex-next")['href'] != '#':
		ok = True
		soup_page = soup_soup
		while ok:
			next_page_url = 'https://domsad.kz' + soup_page.find(class_="flex-next")['href']
			soup_page = BeautifulSoup(get_html(next_page_url), 'html.parser')
			print(next_page_url)
			print()


			parser(soup_page, category_name, category_id)

			if soup_page.find(class_="flex-next") is None:
				ok = False


url = "https://domsad.kz/catalog/"
html = get_html(url)
soup = BeautifulSoup(html, 'html.parser')

c_ok = False
p_ok = False


for parent in soup.find_all(class_="full has-child  m_line v_hover"):
	for child in parent.find_all(class_="section"):
		child_url = 'https://domsad.kz' + child['href']
		child_name = child.text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip()
		soup_child = BeautifulSoup(get_html(child_url), 'html.parser')
		soup_child = soup_child.find(class_="list items")
		if soup_child is not None:
			for child_ in soup_child.find_all(class_="name"):
				name = child_.text.strip().replace('	', ' ').replace('  ', '').replace('\\','/').replace('\n', ' ').replace('\xa0', ' ').replace('\xad', '').strip()
				# print(child_)
				child_url = 'https://domsad.kz' + child_.a['href']
				print(name)

				true_name, c_id = get_true_category(name)
				if c_id is None:
					continue

				if true_name == 'Души, душевые панели, гарнитуры':
					c_ok = True

				if c_ok:
					page_parser(child_url, true_name, c_id)



		else:
			name = child_name
			print(name)
			
			true_name, c_id = get_true_category(name)
			if c_id is None:
				continue

			if true_name == 'Души, душевые панели, гарнитуры':
				c_ok = True

			if c_ok:
				page_parser(child_url, true_name, c_id)
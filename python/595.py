import requests
from bs4 import BeautifulSoup

url = 'https://595.kz'
def get_html(url):
	headers = {
	'Upgrade-Insecure-Requests': '1',
	'User-Agent' :'Mozilla/5.0 (x6411; Ubuntu; Linux x86_64; rv:60.0) Gecko/20100101 Firefox/60.0'}
	r = requests.get(url, headers=headers)
	# time.sleep(0.5)
	# print('request')
	html = r.text
	return html

soup = BeautifulSoup(get_html(url), 'html.parser')
for soup_prod in soup.find_all(class_="col-xs-12 col-sm-6 col-md-4 col-lg-3"):
	url2 = url + soup_prod.a.get("href")
	for t in soup_prod.a.find_all("img"):
		if t.get("alt") is not None:
			name = t.get("alt")
			print(name)

	# soup2 = BeautifulSoup(get_html(url2), 'html.parser')
	# name = soup2.find(a)

	print(url2)

	break
#main()
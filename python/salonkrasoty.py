from bs4 import BeautifulSoup	
import json, requests, pprint

url = 'https://chico.kz/api/users/masters/nogti/?receptionPlace=no_matter&departure=false&childrenReception=false&sale=false&barber=false&gender=no_matter&graphics=%7B%22time%22:%22%22,%22day%22:%22%22,%22everyday%22:false%7D&price=%7B%22min%22:0,%22max%22:0%7D&sortBy=rating&page='

def get_html(url):
	headers = {
	'Upgrade-Insecure-Requests': '1',
	'User-Agent' :'Mozilla/5.0 (x6411; Ubuntu; Linux x86_64; rv:60.0) Gecko/20100101 Firefox/60.0'}
	r = requests.get(url, headers=headers)
	# time.sleep(0.5)
	# print('request')
	html = r.text
	return html

#a = '{"key":"value"}'
#a_dict = json.loads(a)

#print(type(a), type(a_dict))


def main():
	html = get_html(url + str(1))
	# soup = BeautifulSoup(html, 'html.parser')
	a = json.loads(html)
	pp = pprint.PrettyPrinter(indent=1)
	with open('data.json', 'w') as outfile:
    		json.dump(a, outfile)
main()		
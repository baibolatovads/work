from bs4 import BeautifulSoup	
import json, requests, pprint

url = 'books.json'

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
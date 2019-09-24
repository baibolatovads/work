from bs4 import BeautifulSoup	
from urllib.request import *

url = 'https://alpha.wallhaven.cc/random?page='

def get_html(url):
	req = Request(url)
	html = urlopen(req).read()
	return html

def main():
	opener = build_opener()
	opener.addheaders = [('User-Agent', 'Mozilla/5.0')]
	install_opener(opener)
	for i in range(1, 2):
		html = get_html(url + str(i))
		soup = BeautifulSoup(html, 'html.parser')
		list = soup.find_all(class_ = 'preview')
		for index a in enumerate(list):
			secondary_html = get_html(a['href'])
			secondary_soup = BeautifulSoup(secondary_html, 'html.parser')
			image = secondary_soup.find(id = 'wallpaper')['src']
			#print(image)
			urlretrieve('https:' + image, image[52:])
			print(str(index), image[52:], 'ok')

main()
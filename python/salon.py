import requests
import json
 
url = 'https://chico.kz/api/users/masters/nogti/?receptionPlace=no_matter&departure=false&childrenReception=false&sale=false&barber=false&gender=no_matter&graphics=%7B%22time%22:%22%22,%22day%22:%22%22,%22everyday%22:false%7D&price=%7B%22min%22:0,%22max%22:0%7D&sortBy=rating&page='
r = requests.get(url)
report = r.json()
print(report)
#with open('report.json') as report:
 ##  print(data)
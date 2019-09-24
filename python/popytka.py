f = open('input1.txt', 'r')
l = open('output.txt', 'w')
for line in f:
	if line == 'roman':
			l.write('ok')

f.close()

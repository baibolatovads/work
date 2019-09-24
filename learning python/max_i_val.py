a = [int(x) for x in input().split()]

ma = a[0]
for i in range(1, len(a)):
	if (a[i] > ma):
		 ma = a[i]
		 index = i
print(ma)
print(index)	



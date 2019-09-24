a = [int(x) for x in input().split()]
s = []

for i in range(len(a)):
	if (a[i] > 0):
		s.append(a[i])

sm = s[0]
for j in range(len(s)):
	if (s[j] < sm):
		 sm = s[j]
print(sm)


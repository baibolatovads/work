a = [int(x) for x in input().split()]
s = []

for i in range(len(a)):
	if (a[i] % 2 != 0):
		s.append(a[i])
sm = s[0]
for j in range(len(s)):
	if (sm > s[j]):
		sm = s[j]
print(sm)
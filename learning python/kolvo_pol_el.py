a = [int(x) for x in input().split()]
k = 0
for i, val in enumerate(a):
  if (a[i] >= 0):
    k = k + 1
  
print(k)
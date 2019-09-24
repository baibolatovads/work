a = [int(x) for x in input().split()]

for i, val in enumerate(a):
  if (i % 2 == 0):
    print(val) 
/*
a = [int(x) for x in input().split()]

for i in range(0, len(a), 2):
  print(a[i])
  
*/
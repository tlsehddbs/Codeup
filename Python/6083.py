a,b,c=map(int,input().split())
for i in range(a):
  for j in range(b):
    for k in range(c):
      print(i,j,k)
print(a*b*c)
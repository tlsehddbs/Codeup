a,b,c=input().split()
d=int(a)
e=int(b)
f=int(c)
for i in range(d):
  for j in range(e):
    for k in range(f):
      print(i,j,k)
print(d*e*f)
n = int(input())
a = 0
for i in range(1, n + 1):
    if i % 2 == 0:
        a += i
print(a)
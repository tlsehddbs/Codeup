a, b, c = map(int, input().split())
n = (a if a < b else b) if ((a if a < b else b) < c) else c
print(int(n))
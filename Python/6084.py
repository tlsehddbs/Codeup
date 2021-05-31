h, b, c, s = map(float, input().split())
a = (h * b * c * s) / 8 / 1024 / 1024
print('%.1f'%a, "MB")
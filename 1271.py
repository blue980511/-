n, m = map(int, input().split())
mount = n // m
n %= m
print(mount)
print(n)
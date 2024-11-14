from math import ceil

t =  int(input())
for _ in range(t):
    n, m = map(int, input().split())
    n -= 2
    m -= 2

    print(ceil(n / 3) * ceil(m / 3))

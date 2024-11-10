N = int(input())
total = 0
for _ in range(N):
    L, C = map(int, input().split())
    if L > C:
        total += C
print(total)

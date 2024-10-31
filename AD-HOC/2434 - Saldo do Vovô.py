N, S = map(int, input().split())

menor = S
for _ in range(N):
    X = int(input())
    S += X
    if S < menor:
        menor = S

print(menor)

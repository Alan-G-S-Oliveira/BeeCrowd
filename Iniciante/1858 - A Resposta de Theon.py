N = int(input())
T = input().split()

for i in range(N):
    T[i] = int(T[i])

menor = T[0]
posicao = 1
for i in range(1, N):
    if menor > T[i]:
        menor = T[i]
        posicao = (i + 1)

print(posicao)
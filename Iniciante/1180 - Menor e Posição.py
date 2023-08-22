N = int(input())
X = []

X = input().split()
for i in range(0, N):
    X[i] = int(X[i])

menor = X[0]
posicao_menor = 0

for i in range(1, N):
    if menor > X[i]:
        menor = X[i]
        posicao_menor = i

print(f'Menor valor: {menor}')
print(f'Posicao: {posicao_menor}')
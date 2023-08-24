M = []
soma = 0

C = int(input())
T = input()

for i in range(0, 12):
    linha = []
    for j in range(0, 12):
        X = float(input())
        linha.append(X)
    M.append(linha)

for i in range(0, 12):
    soma += M[i][C]

if T == 'S':
    print(f'{soma:.1f}')
elif T == 'M':
    media = soma / 12
    print(f'{media:.1f}')
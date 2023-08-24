O = input()
matriz = []
soma = 0
n = 0

for i in range(0, 12):
    linha = []
    for j in range(0, 12):
        X = float(input())
        linha.append(X)
    matriz.append(linha)

for i in range(0, 12):
    for j in range(0, 12):
        if i > j and i + j > 11:
            soma += matriz[i][j]
            n += 1

if O == 'S':
    print(f'{soma:.1f}')
elif O == 'M':
    media = soma / n
    print(f'{media:.1f}')
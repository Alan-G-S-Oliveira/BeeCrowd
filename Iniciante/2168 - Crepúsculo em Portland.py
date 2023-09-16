N = int(input())

matriz = []

for i in range(N + 1):
    linha = input().split()
    for j in range(N + 1):
        linha[j] = int(linha[j])
    matriz.append(linha)

for i in range(N):
    for j in range(N):
        if matriz[i][j] == matriz[i][j + 1] == 1:
            print('S',end='')
        elif matriz[i][j] == matriz[i + 1][j] == 1:
            print('S',end='')
        elif matriz[i][j] == matriz[i + 1][j + 1] == 1:
            print('S',end='')
        elif matriz[i + 1][j] == matriz[i][j + 1] == 1:
            print('S',end='')
        elif matriz[i + 1][j] == matriz[i + 1][j + 1] == 1:
            print('S',end='')
        elif matriz[i][j + 1] == matriz[i + 1][j + 1] == 1:
            print('S',end='')
        else:
            print('U',end='')
    print()

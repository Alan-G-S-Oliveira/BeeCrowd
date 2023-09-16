N, M = input().split()
N = int(N)
M = int(M)
achou  = False

matriz = []

for i in range(N):
    linha = input().split()
    for j in range(M):
        linha[j] = int(linha[j])
    matriz.append(linha)

for i in range(1, N - 1):
    for j in range(1, M - 1):
        if matriz[i][j] == 42:
            if matriz[i + 1][j] == matriz[i - 1][j] == 7:
                if matriz[i][j + 1] == matriz[i][j - 1] == 7:
                    if matriz[i + 1][j + 1] == matriz[i - 1][j - 1] == 7:
                        if matriz[i + 1][j - 1] == matriz[i - 1][j + 1] == 7:
                            achou = True
                            x = i + 1
                            y = j + 1
                            break
if achou:
    print(f'{x} {y}')
else:
    print('0 0')

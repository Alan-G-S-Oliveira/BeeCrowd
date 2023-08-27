import math

while True:
    try:
        N = int(input())
    except EOFError:
        break

    matriz = []

    for i in range(N):
        linha = []
        for j in range(N):
            if i == j and i + j == (N - 1):
                linha.append(4)
                n = i
            elif i == j:
                linha.append(2)
            elif i + j == (N - 1):
                linha.append(3)
            else:
                linha.append(0)
        matriz.append(linha)

    x = math.ceil(N / 3)
    x = int(x / 2)

    for i in range(n - x, n + x + 1):
        for j in range(n - x, n + x + 1):
            if matriz[i][j] != 4:
                matriz[i][j] = 1

    for i in range(N):
        LINHA = ''
        for j in range(N):
            LINHA += str(matriz[i][j])
        print(LINHA)
    print()
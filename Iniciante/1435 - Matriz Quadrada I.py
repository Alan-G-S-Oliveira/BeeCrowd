while True:
    N = int(input())
    if N <= 0:
        break

    matriz = []

    for i in range(0, N):
        linha = []
        for j in range(0, N):
            distancia = min((i - 0) + 1, (j - 0) + 1, N - i, N - j) 
            linha.append(distancia)
        matriz.append(linha)

    for i in range(0, N):
        for j in range(0, N):
            if matriz[i][j] >= 10:
                print(f' {matriz[i][j]}', end='')
            else:
                print(f'  {matriz[i][j]}', end='')
            if j != N - 1:
                print(' ', end='')
        print()
    print()
    
    matriz.clear()
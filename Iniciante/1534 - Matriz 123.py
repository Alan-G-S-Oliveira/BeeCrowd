while True:

    try:
        N = int(input())
    except EOFError:
        break

    if N < 3 or N >= 70:
        break

    matriz = []

    for i in range(N):
        linha = []
        for j in range(N):
            linha.append(3)
        matriz.append(linha)

    for i in range(N):
        for j in range(N):
            if i == j:
                matriz[i][j] = 1
            if i + j == N - 1:
                matriz[i][j] = 2
    
    for i in range(N):
        for j in range(N):
            print(f'{matriz[i][j]}',end='')
        print()

    matriz.clear()
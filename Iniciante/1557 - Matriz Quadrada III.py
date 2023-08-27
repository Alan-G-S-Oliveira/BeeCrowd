while True:
    N = int(input())

    if N <= 0:
        break
    matriz = []

    for i in range(N):
        x = i
        linha = []
        for j in range(N):
            linha.append(pow(2, x))
            x += 1
        matriz.append(linha)
    
    T = len(str(matriz[N-1][N-1]))
    for i in range(N):
        for j in range(N):
            matriz[i][j] = str(matriz[i][j])
            while len(matriz[i][j]) < T:
                matriz[i][j] = ' ' + matriz[i][j]
        LINHA = ' '.join(matriz[i])
       
        print(LINHA)
    print()
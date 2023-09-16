while True:
    try:
        N, M = input().split()
        N = int(N)
        M = int(M)
        matriz = []
        nova_matriz = []

        for i in range(N):
            matriz.append(input().split())

        for i in range(N):
            linha = []
            for j in range(M):
                if matriz[i][j] == '1':
                    linha.append(9)
                else:
                    adjacente = 0
                    if i != 0:
                        if matriz[i - 1][j] == '1':
                            adjacente += 1
                    if i != (N - 1):
                        if matriz[i + 1][j] == '1':
                            adjacente += 1
                    if j != 0:
                        if matriz[i][j - 1] == '1':
                            adjacente += 1
                    if j != (M - 1):
                        if matriz[i][j + 1] == '1':
                            adjacente += 1
                    linha.append(adjacente)
            nova_matriz.append(linha)   

        for i in range(N):
            for j in range(M):
                print(f'{nova_matriz[i][j]}',end='')
            print()
    except EOFError:
        break
            
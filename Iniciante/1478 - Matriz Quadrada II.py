while True:
    N = int(input())

    if N <= 0:
        break

    matriz = []

    for i in range(0, N):
        x = i + 1
        comeco = x
        linha = []

        for j in range(0, N):
            linha.append(x)
    
            if comeco > 1 and x > 1:
                x -= 1
            else:
                comeco = 1
                x += 1
   
        matriz.append(linha)

    for i in range(0, N):
        espaco = ''
        for j in range(0, N):
            espaco += " %3d" %matriz[i][j]
        print(espaco[1:])
    print()
    
    matriz.clear()
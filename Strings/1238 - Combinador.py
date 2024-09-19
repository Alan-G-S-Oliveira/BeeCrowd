N = int(input())

for _ in range(N):
    X, Y = input().split()
    saida = ''

    tamanho = min(len(X), len(Y))
    i = j = 0
    for k in range(tamanho * 2):
        if k % 2 == 0:
            saida += X[i]
            i += 1
        else:
            saida += Y[j]
            j += 1
    if len(X) > len(Y):
        saida += X[tamanho:]
    else:
        saida += Y[tamanho:]
    print(saida)

N = int(input())

for j in range(N):
    M = int(input())
    X = input().split()

    for i in range(M):
        X[i] = int(X[i])

    lista = []

    for i in range(M):
        if X[i] % 2 != 0:
            lista.append(X[i])

    lista.sort()
    saida = []
    
    j = len(lista) - 1
    k = 0
    for i in range(len(lista)):
        if i % 2 == 0:
            saida.append(lista[j])
            j -= 1
        else:
            saida.append(lista[k])
            k += 1

    for i in range(len(saida)):
        print(saida[i],end='')
        if i != len(saida) - 1:
            print(' ',end='')
    print()

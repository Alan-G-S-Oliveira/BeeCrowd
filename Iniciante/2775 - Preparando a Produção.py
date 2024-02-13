def mergeSort(Lista):

    if len(Lista[0]) <= 1:
        return Lista
    
    meio = len(Lista[0]) // 2
    esq = [Lista[0][:meio], Lista[1][:meio], Lista[2]]
    dir = [Lista[0][meio:], Lista[1][:meio], Lista[2]]

    esq = mergeSort(esq)
    dir = mergeSort(dir)

    return merge(esq, dir)

def merge(Esquerda, Direita):

    resultado = []
    i = j = 0

    while i < len(Esquerda) and j < len(Direita):
        if Esquerda[0][i] < Direita[0][j]:

            resultado.append(Esquerda[i])
            i += 1
            resultado[2] += resultado[1][i]

        else:

            resultado.append(Direita[j])
            j += 1
            resultado[2] += resultado[1][j]

        resultado.extend(Esquerda[i:])
        resultado.extend(Direita[j:])

    return resultado

while True:

    try:

        N = int(input())

        L1 = input().split()
        L2 = input().split()

        for i in range(N):
            L1[i] = int(L1[i])
            L2[i] = int(L2[i])

        Lista = [L1, L2, 0]

        Lista = mergeSort(Lista)

        print(Lista[2])

    except EOFError:
        break

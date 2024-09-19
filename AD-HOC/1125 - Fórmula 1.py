def decrementa_um(x):
    return x - 1

def maior_elemento(lista):
    maior = lista[0]
    for i in lista:
        if i > maior:
            maior = i

    return maior

while True:
    G, P = list(map(int, input().split()))
    if G == P == 0:
        break

    corridas = []
    for i in range(G):
        aux = list(map(int, input().split()))
        corridas.append(list(map(decrementa_um, aux)))

    S = int(input())
    for i in range(S):
        aux = list(map(int, input().split()))
        K = aux[0]
        pontos = aux[1:]
        resultados = [0] * P
        for j in range(G):
            for k in range(P):
                try:
                    resultados[k] += pontos[corridas[j][k]]
                except IndexError:
                    pass

        maior = maior_elemento(resultados)
        saida = []
        for j in range(P):
            if resultados[j] == maior:
                saida.append(j + 1)

        for j in range(len(saida)):
            print(saida[j],end='')
            if j != len(saida) - 1:
                print(end=' ')
        print()      

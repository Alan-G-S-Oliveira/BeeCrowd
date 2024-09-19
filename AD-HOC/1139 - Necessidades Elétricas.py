def maximo(lista, x):
    return max(abs(lista[0] - x[0]), abs(lista[1] - x[1]))

def distancia(lista, x):
    menor = maximo(lista[0], x)
    for i in lista:
        aux = maximo(i, x)
        if menor > aux:
            menor = aux
    return menor

def busca_menor(lista, x):
    cont = 0
    ant = -1
    pos = 1
    for i in lista:
        if i == 0:
            continue

        cont += 1
        if i != ant:
            ant = i
            pos = 1
        else:
            pos += 1

        if cont == x:
            return i, pos
        
def busca_elemento(lista, x, pos):
    cont = 0
    for i in range(len(lista)):
        if lista[i] == x:
            cont += 1
            if cont == pos:
                return i

while True:
    N, M, P = list(map(int, input().split()))
    if N == M == 0:
        break
    
    pontos = []
    for i in range(P):
        pontos.append(list(map(int, input().split())))
        
    matriz = []
    for i in range(N):
        for j in range(M):
            matriz.append(distancia(pontos, [i + 1, j + 1]))
        
    matriz_auxiliar = matriz.copy()
    matriz_auxiliar.sort()

    Q = int(input())
    consultas = list(map(int, input().split()))

    for k in consultas:
        n, m = busca_menor(matriz_auxiliar, k)
        posicao = busca_elemento(matriz, n, m)
        i = (posicao // M) + 1
        j = (posicao % M) + 1

        print(i, j)
    print('-')

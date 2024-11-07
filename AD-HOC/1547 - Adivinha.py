N = int(input())
for _ in range(N):
    QT, S = map(int, input().split())

    X = list(map(int, input().split()))
    menor = abs(X[0] - S)
    indice = 0
    for i in range(1, QT):
        aux = abs(X[i] - S)
        if aux < menor:
            indice = i
            menor = aux
    print(indice + 1)


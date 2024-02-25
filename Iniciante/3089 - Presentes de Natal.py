while True:
    n = int(input())

    if n == 0:
        break

    X = list(map(int, input().split()))

    precos = []
    for i in range(n):
        precos.append(X[i] + X[-1 - i])

    precos.sort()

    print(f'{precos[-1]} {precos[0]}')

    
N = int(input())

for i in range(0, N):
    X, Y = input().split()

    X = int(X)
    Y = int(Y)
    soma = 0

    for j in range(0, Y):
        if X % 2 != 0:
            soma += X
        else:
            X += 1
            soma += X
        X += 2

    print(soma)
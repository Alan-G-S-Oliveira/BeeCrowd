while True:
    X, M = input().split()
    X = int(X)
    M = int(M)

    if X == M == 0:
        break

    print(X * M)

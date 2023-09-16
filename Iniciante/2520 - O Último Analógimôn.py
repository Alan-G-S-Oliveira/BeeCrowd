while True:
    try:
        X, Y = input().split()
        X = int(X)
        Y = int(Y)

        for i in range(X):
            N = input().split()
            for j in range(Y):
                if N[j] == '1':
                    J = [i, j]
                elif N[j] == '2':
                    A = [i, j]

        distancia = abs(J[0] - A[0]) + abs(J[1] - A[1])
        print(distancia)
    except EOFError:
        break

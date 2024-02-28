while True:
    try:

        N, P = list(map(int, input().split()))

        X = list(map(int, input().split()))
        X.sort()

        Q = []

        for i in range(1, 4):
            k = (i * (N + 1) / 4) - 1
            Q.append(X[int(k)] + (int(k) - k) * (X[int(k) + 1] - X[int(k)]))

        inferior = Q[0] - 0.5000001 * (Q[2] - Q[0])
        superior = Q[2] + 0.5000001 * (Q[2] - Q[0])

        multa = 0
        for i in X:
            if i > superior or i < inferior:
                multa += P

        print(multa)

    except EOFError:
        break

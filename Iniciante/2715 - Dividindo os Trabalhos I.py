while True:
    try:
        N = int(input())
        X = input().split()
        soma1 = 0
        soma2 = 0

        for i in range(N):
            X[i] = int(X[i])
            soma2 += X[i]

        for i in range(N):

            if soma1 + X[i] >= soma2:
                 break

            soma1 += X[i]
            soma2 -= X[i]

        print(abs(soma2 - soma1))
    except EOFError:
        break
    
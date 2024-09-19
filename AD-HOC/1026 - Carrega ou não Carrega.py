while True:
    try:

        X, Y = list(map(int, input().split()))

        X = (str(bin(X)))[2:]
        Y = (str(bin(Y)))[2:]
        X = X[::-1]
        Y = Y[::-1]

        resultado = ''

        n = min(len(X), len(Y))
        N = max(len(X), len(Y))
        for i in range(n):
            if X[i] != Y[i]:
                resultado += '1'
            else:
                resultado += '0'

        for i in range(n, N):
            if len(X) > len(Y):
                resultado += X[i]
            else:
                resultado += Y[i]

        resultado = resultado[::-1]
        print(int(resultado, 2))        

    except EOFError:
        break

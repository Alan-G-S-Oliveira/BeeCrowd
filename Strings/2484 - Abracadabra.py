while True:
    try:
        N = input()
        X = len(N)

        for i in range(X):
            espaco = X - len(N)
            saida = ' ' * espaco
            for j in range(len(N)):
                saida += N[j]
                if j != len(N) - 1:
                    saida += ' '
            N = N[:j]
            print(saida)
        print()

    except EOFError:
        break
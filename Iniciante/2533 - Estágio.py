while True:
    try:
        M = int(input())

        X1 = 0
        X2 = 0
        for i in range(M):
            N, C = input().split()
            N = int(N)
            C = int(C)

            X1 += (N * C)
            X2 += C
        IRA = float(X1) / (X2 * 100)

        print(f'{IRA:.4f}')
    except EOFError:
        break

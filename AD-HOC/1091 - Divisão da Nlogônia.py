while True:
    K = int(input())
    if K == 0:
        break

    N, M = list(map(int, input().split()))

    for i in range(K):
        X, Y = list(map(int, input().split()))
        I = X - N
        J = Y - M

        if I == 0 or J == 0:
            print('divisa')
        elif I > 0 and J > 0:
            print('NE')
        elif I > 0 and J < 0:
            print('SE')
        elif I < 0 and J > 0:
            print('NO')
        else:
            print('SO')

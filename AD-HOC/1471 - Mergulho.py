while True:
    try:
        N, R = map(int, input().split())
        F = list(map(int, input().split()))
        if N == len(F):
            print('*')
        else:
            for i in range(1, N + 1):
                if not(i in F):
                    print(i,end=' ')
            print()
    except EOFError:
        break
    
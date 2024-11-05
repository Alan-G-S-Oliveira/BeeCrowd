while True:
    try:
        N = int(input())
        for i in range(1, N + 1, 2):
            print(' ' * ((N - i) // 2) + '*' * i)
        print(' ' * ((N - 1) // 2) + '*')
        print(' ' * ((N - 3) // 2) + '***')
        print()

    except EOFError:
        break
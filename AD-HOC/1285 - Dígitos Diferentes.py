while True:
    try:
        N, M = list(map(int, input().split()))

        casas = 0
        for i in range(N, M + 1):
            aux = str(i)
            if len(aux) == len(set(aux)):
                casas += 1

        print(casas)
    except EOFError:
        break

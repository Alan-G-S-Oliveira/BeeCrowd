while True:
    try:

        N = int(input())

        e1, e2 = map(int, input().split())

        a1 = list(map(int, input().split()))
        a2 = list(map(int, input().split()))
        if N > 1:
            t1 = list(map(int, input().split()))
            t2 = list(map(int, input().split()))

        x1, x2 = map(int, input().split())

        c1 = e1 + a1[0]
        c2 = e2 + a2[0]

        for i in range(1, N):
            aux1 = c1
            aux2 = c2

            c1 = min(aux1, aux2 + t2[i - 1]) + a1[i]
            c2 = min(aux2, aux1 + t1[i - 1]) + a2[i]

        final =  min(c1 + x1, c2 + x2)
        print(final)

    except EOFError:
        break

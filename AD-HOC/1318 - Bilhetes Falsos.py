while True:
    N, M = map(int, input().split())
    if N == 0:
        break
    T = list(map(int, input().split()))

    cont = 0
    for i in range(1, N + 1):
        if T.count(i) > 1:
            cont += 1
    print(cont)

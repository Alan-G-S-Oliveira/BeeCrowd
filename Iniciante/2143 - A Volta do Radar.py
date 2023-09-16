while True:
    T = int(input())
    if T == 0:
        break

    for i in range(T):
        N = int(input())
        if (N - 1) % 2 == 0:
            pedidos = N * 2 - 1
        else:
            pedidos = (N - 1) * 2
        print(pedidos)
        
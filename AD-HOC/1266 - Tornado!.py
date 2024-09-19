while True:
    N = int(input())
    if N == 0:
        break

    X = list(map(int, input().split()))
    try:
        comeco = X.index(1)

        i = (comeco + 1) % N
        cercas = 0
        cont = 0
        while i != comeco:
            if X[i] == 0:
                cont += 1
            else:
                cercas += cont // 2
                cont = 0
            i = (i + 1) % N
        cercas += cont // 2
    except ValueError:
        cercas = N // 2
        if N % 2 == 0:
            cercas += 1
    finally:
        print(cercas)

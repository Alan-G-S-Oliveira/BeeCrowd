from math import ceil

while True:
    try:
        N = int(input())
        achou = False
        if N == 0:
            achou = True
        elif N > 0:
            for i in range(0, ceil(N ** 0.5)):
                aux = (N - (i ** 2)) ** 0.5
                if int(aux) == aux:
                    achou = True
                    break
        if achou:
            print('YES')
        else:
            print('NO')

    except EOFError:
        break

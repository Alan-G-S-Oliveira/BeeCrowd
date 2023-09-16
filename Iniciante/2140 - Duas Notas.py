while True:

    N, M = input().split()

    if N == M == '0':
        break

    N = int(N)
    M = int(M)

    nota = 0
    troco = M - N
    while troco - 100 >= 0:
        troco -= 100
        nota += 1
    while troco - 50 >= 0:
        troco -= 50
        nota += 1
    while troco - 20 >= 0:
        troco -= 20
        nota += 1
    while troco - 10 >= 0:
        troco -= 10
        nota += 1
    while troco - 5 >= 0:
        troco -= 5
        nota += 1
    while troco - 2 >= 0:
        troco -= 2
        nota += 1

    if nota == 2:
        print('possible')
    else:
        print('impossible')

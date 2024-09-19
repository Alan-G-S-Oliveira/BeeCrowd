from math import ceil

while True:
    try:
        L = input().split('W')
        P = int(input())

        saida = len(L) - 1
        for i in L:
            if i != '':
                saida += ceil(len(i) / P)
        print(saida)

    except EOFError:
        break

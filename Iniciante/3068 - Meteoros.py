cont = 1

while True:
    X1, Y1, X2, Y2 = list(map(int, input().split()))

    if X1 == X2 == Y1 == Y2 == 0:
        break

    N = int(input())

    meteoros = 0
    for i in range(N):
        X, Y = list(map(int, input().split()))

        if X1 <= X <= X2 and Y1 >= Y >= Y2:
            meteoros += 1

    print(f'Teste {cont}')
    print(meteoros)

    cont += 1

while True:
    X1, Y1, X2, Y2, =  list(map(int, input().split()))
    if X1 == Y1 == X2 == Y2 == 0:
        break

    if X1 == X2 and Y1 == Y2:
        print(0)
    elif X1 == X2 or Y1 == Y2:
        print(1)
    elif X1 - Y1 == X2 - Y2:
        print(1)
    elif X1 + Y1 == X2 + Y2:
        print(1)
    else:
        print(2)

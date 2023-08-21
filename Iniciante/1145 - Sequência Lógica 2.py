while True:
    X = int(input())

    if X <= 0:
        break

    for i in range(1, X):
        print(f'{i} ', end='')
    print(f'{X}')
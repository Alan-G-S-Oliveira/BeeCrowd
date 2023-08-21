X, Y = input().split()

X = int(X)
Y = int(Y)

for i in range(1, Y + 1):
    if i % X != 0:
        print(f'{i} ', end='')
    else:
        print(f'{i}')
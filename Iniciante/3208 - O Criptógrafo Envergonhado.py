while True:
    K, L = list(map(int, input().split()))

    if K == L == 0:
        break

    i = 2

    while K % i != 0 and i < L:
        i += 1

    if i < L:
        print(f'BAD {i}')
    else:
        print('GOOD')

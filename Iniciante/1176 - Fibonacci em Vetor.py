T = int(int(input()))

for i in range(0, T):
    N = int(input())

    n1 = 0
    n2 = 1

    for j in range(2, N + 1):
        aux = n1 + n2
        n1 = n2
        n2 = aux
    if N == 0:
        print(f'Fib({N}) = {n1}')
    else:
        print(f'Fib({N}) = {n2}')
while True:
    N = int(input())
    if N == 0:
        break

    R = list(map(int, input().split()))

    maria = len(list(filter(lambda x: x == 0, R)))
    print(f'Mary won {maria} times and John won {N - maria} times')

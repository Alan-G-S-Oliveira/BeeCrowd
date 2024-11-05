while True:
    N, M = map(int, input().split())
    if N == M == 0:
        break

    R = str(N + M)
    print(R.replace('0', ''))

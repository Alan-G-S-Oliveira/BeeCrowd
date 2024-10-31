while True:
    N = int(input())
    if N == 0:
        break

    H = list(map(int, input().split()))

    picos = 0
    for i in range(N):
        if H[(i - 1) % N] < H[i % N] and H[i % N] > H[(i + 1) % N]:
            picos += 1
        elif H[(i - 1) % N] > H[i % N] and H[i % N] < H[(i + 1) % N]:
            picos += 1
    print(picos)

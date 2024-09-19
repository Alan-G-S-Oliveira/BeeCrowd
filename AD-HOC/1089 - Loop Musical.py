saida = ''

while True:
    N = int(input())
    if N == 0:
        break

    H = list(map(int, input().split()))

    picos = 0
    
    for i in range(1, N - 1):
        if (H[i] > H[i - 1] and H[i] > H[i + 1]) or (H[i] > H[i - 1] and H[i] > H[i + 1]):
            picos += 1

    if (H[0] > H[-1] and H[0] > H[1]) or (H[0] < H[-1] and H[0] < H[1]):
        picos += 1
    if (H[-1] > H[-2] and H[-1] > H[0]) or (H[-1] < H[-2] and H[-1] < H[0]):
        picos += 1

    saida += (str(picos) + '\n')

print(saida)

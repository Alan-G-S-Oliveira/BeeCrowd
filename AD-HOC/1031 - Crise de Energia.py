def josephus(n: int, passo: int) -> int:
    ultimo = 0
    for i in range(1, n):
        ultimo = (ultimo + passo) % i

    return ultimo

while True:
    N = int(input())
    if N == 0:
        break

    pulo = 1
    while True:
        if josephus(N, pulo) != 11:
            pulo += 1
        else:
            break
    print(pulo)

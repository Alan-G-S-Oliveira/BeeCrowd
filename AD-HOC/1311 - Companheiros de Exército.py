def baixas(soldados: list, L: int, R: int) -> tuple:

    l = soldados.index(L)
    r = soldados.index(R)

    soldadoL = (soldados[l - 1] if l > 0 else -1)
    soldadoR = (soldados[r + 1] if r < (len(soldados) - 1) else -1)

    saida = [i for i in soldados if (i < L or i > R)]
    return saida, soldadoL, soldadoR

while True:
    S, B = map(int, input().split())
    if S == 0:
        break

    soldados = list(range(1, S + 1))

    for i in range(B):
        L, R = map(int, input().split())
        soldados, soldadoL, soldadoR = baixas(soldados, L, R)
        print(soldadoL if soldadoL != -1 else '*',end=' ')
        print(soldadoR if soldadoR != -1 else '*')
    print('-')

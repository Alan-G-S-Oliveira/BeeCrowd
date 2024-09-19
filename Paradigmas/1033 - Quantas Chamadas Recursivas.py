cont = 1

while True:
    n, b = map(int, input().split())
    if n == b == 0:
        break

    anterior = 0
    atual = 0

    for i in range(1, n):
        anterior, atual = atual, anterior + atual + 2

    saida = atual % b
    if saida == 0:
        saida = atual // b
    print(f'Case {cont}: {n} {b} {saida + 1}')

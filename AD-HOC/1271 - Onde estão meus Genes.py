def inverter(genoma: list, inicio: int, fim: int) -> list:
    aux = genoma[inicio:(fim + 1)][::-1]
    return genoma[:inicio] + aux + genoma[(fim + 1):]


cont = 1
while True:
    N = int(input())
    if N == 0:
        break

    genoma = [(i + 1) for i in range(N)]

    R = int(input())
    for i in range(R):
        I, J = list(map(int, input().split()))
        genoma = inverter(genoma, I - 1, J - 1)
    Q = int(input())

    print(f'Genome {cont}')
    for i in range(Q):
        X = int(input())
        print(genoma.index(X) + 1)
    cont += 1

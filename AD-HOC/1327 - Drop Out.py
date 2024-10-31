def igual(vetor: list) -> bool:
    for i in range(len(vetor) - 1):
        if vetor[i] != vetor[i + 1]:
            return False
    return True

saida = ''
while True:
    N = int(input())
    if N == 0:
        break

    jogadores = input().split()
    baralho = []
    for _ in range(4):
        baralho += list(map(int, input().split()))
    cont = 0
    acabou = False
    while N > 1:
        cartas = []
        for _ in range(N):
            if cont >= 52:
                acabou = True
                break
            cartas.append(baralho[cont])
            cont += 1
        if igual(cartas) or acabou:
            break

        tamanho = len(jogadores)
        menor = min(cartas)
        for _ in range(N):
            try:
                jogadores.pop(cartas.index(menor))
                cartas.remove(menor)
            except Exception:
                break
        N -= (tamanho - len(jogadores))
    print(''.join(jogadores[i] + (' ' if i != len(jogadores) else '\n') for i in range(len(jogadores))))

QT = int(input())

for i in range(QT):
    jogador1, escolha1, jogador2, escolha2 = input().split()
    jogada1, jogada2 = input().split()

    jogada1 = int(jogada1)
    jogada2 = int(jogada2)
    soma = jogada1 + jogada2

    if escolha1 == 'PAR':
        if soma % 2 == 0:
            print(jogador1)
        else:
            print(jogador2)
    else:
        if soma % 2 == 0:
            print(jogador2)
        else:
            print(jogador1)
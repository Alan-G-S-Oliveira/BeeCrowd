N = int(input())

for i in range(N):
    jogador1 = input()
    jogador2 = input()

    if jogador1 == jogador2:
        if jogador1 == 'papel':
            print('Ambos venceram')
        elif jogador1 == 'pedra':
            print('Sem ganhador')
        else:
            print('Aniquilacao mutua')
    elif jogador1 == 'ataque':
        print('Jogador 1 venceu')
    elif jogador2 == 'ataque':
        print('Jogador 2 venceu')
    elif jogador1 == 'papel':
        print('Jogador 2 venceu')
    elif jogador2 == 'papel':
        print('Jogador 1 venceu')

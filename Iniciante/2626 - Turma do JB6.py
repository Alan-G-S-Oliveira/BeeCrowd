while True:
    try:
        jogadas = input().split()

        if jogadas[0] == 'papel' and jogadas[1] == jogadas[2] == 'pedra':
            print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
        elif jogadas[0] == 'pedra' and jogadas[1] == jogadas[2] == 'tesoura':
            print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
        elif jogadas[0] == 'tesoura' and jogadas[1] == jogadas[2] == 'papel':
            print('Os atributos dos monstros vao ser inteligencia, sabedoria...')
        elif jogadas[1] == 'papel' and jogadas[0] == jogadas[2] == 'pedra':
            print('Iron Maiden\'s gonna get you, no matter how far!')
        elif jogadas[1] == 'pedra' and jogadas[0] == jogadas[2] == 'tesoura':
            print('Iron Maiden\'s gonna get you, no matter how far!')
        elif jogadas[1] == 'tesoura' and jogadas[0] == jogadas[2] == 'papel':
            print('Iron Maiden\'s gonna get you, no matter how far!')
        elif jogadas[2] == 'papel' and jogadas[0] == jogadas[1] == 'pedra':
            print('Urano perdeu algo muito precioso...')
        elif jogadas[2] == 'pedra' and jogadas[0] == jogadas[1] == 'tesoura':
            print('Urano perdeu algo muito precioso...')
        elif jogadas[2] == 'tesoura' and jogadas[0] == jogadas[1] == 'papel':
            print('Urano perdeu algo muito precioso...')
        else:
            print('Putz vei, o Leo ta demorando muito pra jogar...')
    except EOFError:
        break

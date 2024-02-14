while True:
    try:

        pernas = input()

        if pernas == 'esquerda':
            print('ingles')
        elif pernas == 'direita':
            print('frances')
        elif pernas == 'nenhuma':
            print('portugues')
        else:
            print('caiu')

    except EOFError:
        break
    
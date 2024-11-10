while True:
    try:
        D = input()
        S = input()
        print('Resistente' if S in D else 'Nao resistente')
    except EOFError:
        break

while True:
    aux = input()
    if aux == '0':
        break
    Q, D, P = map(int, aux.split())
    X = (P * D)/(P - Q)
    R = int(X * Q)
    if R == 1:
        print('1 pagina')
    else:
        print(f'{R} paginas')

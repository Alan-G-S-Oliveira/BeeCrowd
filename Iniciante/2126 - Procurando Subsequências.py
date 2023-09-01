y = 1

while True:
    try:
        N1 = input()
        N2 = input()
    except EOFError:
        break

    X = 0
    pos = -1

    for i in range(len(N2) - len(N1) + 1):
        if N1 == N2[i:i + len(N1)]:
            X += 1
            pos = i + 1

    print(f'Caso #{y}:')
    if pos == -1:
        print('Nao existe subsequencia')
    else:
        print(f'Qtd.Subsequencias: {X}')
        print(f'Pos: {pos}')
    print()
    y += 1

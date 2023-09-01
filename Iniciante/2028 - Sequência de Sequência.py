x = 1

while True:
    try:
        N = int(input())
    except EOFError:
        break

    qtd = 1
    for i in range(N + 1):
        qtd += i

    print(f'Caso {x}: {qtd} numero',end='')
    if qtd != 1:
        print('s')
    else:
        print()
    x += 1
    t = 0

    if qtd != 1:
        print('0 ',end='')
    else:
        print(0, end='')
    for i in range(N + 1):
        for j in range(i):
            if i != N or j != i - 1:
                print(f'{t} ',end='')
            else:
                print(f'{t}')
        t += 1
    print()

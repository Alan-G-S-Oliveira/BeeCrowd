while True:
    N, B = list(map(int, input().split()))
    if N == B == 0:
        break

    bolas = list(map(int, input().split()))

    possibilidades = [0] * (N + 1)
    for i in range(B - 1):
        for j in range(i, B):
            try:
                possibilidades[abs(bolas[i] - bolas[j])] = 1
            except IndexError:
                pass
    
    possibilidades[0] = 1
    achou = True
    for i in possibilidades:
        if i != 1:
            print('N')
            achou = False
            break
    if achou:
        print('Y')

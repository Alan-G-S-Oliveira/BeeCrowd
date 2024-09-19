N = int(input())

for _ in range(N):
    dieta = list(input())
    cafe = list(input())
    almoco = list(input())

    for i in cafe:
        if i in dieta:
            dieta.remove(i)
        else:
            dieta = 'CHEATER'
            break
    if dieta != 'CHEATER':
        for i in almoco:
            if i in dieta:
                dieta.remove(i)
            else:
                dieta = 'CHEATER'
                break
    if dieta != 'CHEATER':
        dieta.sort()
        print(''.join(i for i in dieta))
    else:
        print(dieta)

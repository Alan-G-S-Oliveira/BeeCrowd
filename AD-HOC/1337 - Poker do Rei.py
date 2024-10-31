while True:
    cartas = list(map(int, input().split()))
    if cartas[0] == 0:
        break

    if cartas[0] == cartas[1] == cartas[2]:
        if cartas[0] < 13:
            print(cartas[0] + 1, cartas[0] + 1, cartas[0] + 1)
        else:
            print('*')
    else:
        cartas.sort()
        if cartas[0] != cartas[1] and cartas[1] != cartas[2] and cartas[0] != cartas[2]:
            aux = min(cartas)
            print(aux, aux, aux + 1)
    
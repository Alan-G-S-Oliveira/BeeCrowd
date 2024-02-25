while True:
    try:

        h, m = list(map(int, input().split()))

        horas = int((12 * h) / 360)
        minutos = int((60 * m) / 360)

        if horas < 10:
            print('0',end='')
        print(f'{horas}:',end='')
        if minutos < 10:
            print('0',end='')
        print(f'{minutos}')

    except EOFError:
        break

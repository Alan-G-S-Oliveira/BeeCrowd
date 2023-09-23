while True:
    try:
        M = float(input())
        M %= 360

        if 0 <= M < 90:
            print('Bom Dia!!')
        elif 90 <= M < 180:
            print('Boa Tarde!!')
        elif 180 <= M < 270:
            print('Boa Noite!!')
        else:
            print('De Madrugada!!')

        horas = (M / 360 * 24) + 6
        hora = int(horas)
        minutos = (horas - int(horas)) * 60
        segundos = (minutos - int(minutos)) * 60
        minuto = round(minutos)
        segundo = round(segundos)
        hora %=  24
        minuto %= 60
        segundo %= 60

        if hora < 10:
            print(0,end='')
        print(f'{hora}:',end='')
        if minuto < 10:
            print(0,end='')
        print(f'{minuto}:',end='')
        if segundo < 10:
            print(0,end='')
        print(f'{segundo}')

    except EOFError:
        break

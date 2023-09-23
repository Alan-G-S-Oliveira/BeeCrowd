while True:
    try:
        M = int(input())
        
        if 0 <= M < 90 or M == 360:
            print('Bom Dia!!')
        elif 90 <= M < 180:
            print('Boa Tarde!!')
        elif 180 <= M < 270:
            print('Boa Noite!!')
        else:
            print('De Madrugada!!')
    except EOFError:
        break

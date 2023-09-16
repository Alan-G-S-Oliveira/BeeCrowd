while True:
    try:
        mes, dia = input().split()
        mes = int(mes)
        dia = int(dia)
    except EOFError:
        break

    for i in range(1, mes):
        if i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10:
            dia += 31
        elif i == 4 or i == 6 or i == 9 or i == 11:
            dia += 30
        else:
            dia += 29

    dia  = 360 - dia

    if dia > 0:
        if dia == 1:
            print('E vespera de natal!')
        else:
            print(f'Faltam {dia} dias para o natal!')
    elif dia == 0:
        print('E natal!')
    else:
        print('Ja passou!')

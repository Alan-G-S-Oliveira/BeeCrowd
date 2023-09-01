while True:
    try:
        horas = input()
    except EOFError:
        break

    hora = int(horas[:1])
    minuto = int(horas[2:])
    
    hora += 1
    if hora < 8:
        print('Atraso maximo: 0')
    else:
        atraso = hora - 8
        atraso *= 60
        atraso += minuto
        
        print(f'Atraso maximo: {atraso}')

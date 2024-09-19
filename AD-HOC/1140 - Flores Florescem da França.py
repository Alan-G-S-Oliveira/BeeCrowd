while True:
    frase = input()
    if frase == '*':
        break

    palavras = frase.split()
    anterior = palavras[0][0].lower()
    tautograma = True
    for i in palavras:
        if i[0].lower() != anterior:
            tautograma = False
            break
        anterior = i[0].lower()

    if tautograma:
        print('Y')
    else:
        print('N')

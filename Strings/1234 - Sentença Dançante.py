while True:
    try:
        X = input()

        saida = ''
        cont = 0
        for i in X:
            if i.isalpha():
                if cont % 2 == 0:
                    saida += i.upper()
                else:
                    saida += i.lower()
                cont += 1
            else:
                saida += i
        print(saida)

    except EOFError:
        break
    
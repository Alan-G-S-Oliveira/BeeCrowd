while True:
    try:
        texto = (input().lower()).split()
        letra = list(map(lambda x: x[0], texto))

        aux = letra[0]
        cont = 1
        saida = 0
        for i in range(1, len(letra)):
            if letra[i] == aux:
                cont += 1
            else:
                aux = letra[i]
                if cont > 1:
                    saida += 1
                cont = 1
        if cont > 1:
            saida += 1
        print(saida)

    except EOFError:
        break

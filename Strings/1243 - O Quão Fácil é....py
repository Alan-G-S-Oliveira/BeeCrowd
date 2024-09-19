while True:
    try:
        frase = input().split()
        cont_palavras = 0
        cont_letras = 0
        for i in range(len(frase)):
            if frase[i][-1] == '.':
                frase[i] = frase[i][:len(frase[i]) - 1]
            if frase[i].isalpha():
                cont_palavras += 1
                cont_letras += len(frase[i])
        try:
            media = cont_letras // cont_palavras
        except ZeroDivisionError:
            media = 0

        if media <= 3:
            print(250)
        elif media <= 5:
            print(500)
        else:
            print(1000)

    except EOFError:
        break

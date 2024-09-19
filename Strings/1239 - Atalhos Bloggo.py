def substituir(condicao: bool, caractere: str) -> tuple:
    if condicao:
        saida = f'</{caractere}>'
    else:
        saida = f'<{caractere}>'
    return saida, not(condicao)

while True:
    try:

        texto = input()
        saida = ''

        underline = False
        sublinhado = False
        for i in texto:
            if i == '_':
                aux, underline = substituir(underline, 'b')
                saida += aux
            elif i == '*':
                aux, sublinhado = substituir(sublinhado, 'i')
                saida += aux
            else:
                saida += i
        print(saida)

    except EOFError:
        break

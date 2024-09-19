import re

def substituir(A: str, trocar: str, numero: int) -> str:
    abre_tag = None
    saida = ''
    for i in range(len(A)):
        if abre_tag == None:
            saida += A[i]
            if A[i] == '<':
                abre_tag = i
        else:
            if A[i] == '>':
                saida += re.sub(trocar, str(numero), A[abre_tag + 1:i], flags=re.IGNORECASE)
                saida += '>'
                abre_tag = None

    return saida

while True:
    try:
        tag = input()
        numero = int(input())
        texto = input()

        print(substituir(texto, tag, numero))
    except EOFError:
        break

dicionario = {

    '.' : '0',
    '..' : '1',
    '...' : '2'

}

def ternario_decimal(n: str) -> int:
    n = n[::-1]

    numero = 0
    for i in range(len(n)):
        numero += int(n[i]) * 3**i

    return numero
    

while True:
    try:
        N = int(input())
        
        for i in range(N):
            codigo = input().split()
            numero = (str(len(codigo) - 1) + dicionario[codigo[0]])
            numero = ternario_decimal(numero)

            print(chr(ord('a') + numero))

    except EOFError:
        break
    
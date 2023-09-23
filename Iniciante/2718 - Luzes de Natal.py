def decimal_binario(n: int) -> str:

    #0 é um dígito auxiliar
    numero = '0'
    while n > 1:
        numero += str(n % 2)
        n //= 2
    numero += str(n)

    return numero[::-1]

N = int(input())

for i in range(N):
    X = int(input())

    numero = decimal_binario(X)
    maior = 0
    sequencia = 0

    for i in numero:
        if i == '1':
            sequencia += 1
        else:
            if sequencia > maior:
                maior = sequencia
            sequencia = 0
        
    print(maior)

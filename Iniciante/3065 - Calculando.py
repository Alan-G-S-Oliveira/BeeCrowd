cont = 1

while True:

    m = int(input())
    if m == 0:
        break

    operandos = []
    operadores = []

    expressao = input()

    aux = ''

    for i in expressao:
        if i == '+' or i == '-':
            operandos.append(aux)
            operadores.append(i)
            aux = ''
        else:
            aux += i
    operandos.append(aux)

    for i in range(len(operandos)):
        operandos[i] = int(operandos[i])

    resultado = operandos[0]
    for i in range(1, len(operandos)):
        if operadores[0] == '+':
            resultado += operandos[i]
        else:
            resultado -= operandos[i]
        operadores.pop(0)

    print(f'Teste {cont}')
    print(resultado)
    print()

    cont += 1

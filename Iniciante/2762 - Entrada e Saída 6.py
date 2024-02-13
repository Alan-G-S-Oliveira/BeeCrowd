numero = input()
numeroDecimal = ''
numeroFracionario = ''

for i in range(len(numero)):
    if numero[i] == '.':
        numeroDecimal = numero[:i]
        numeroFracionario = numero[i + 1:]
        break
    
print(f'{int(numeroFracionario)}.{numeroDecimal}')

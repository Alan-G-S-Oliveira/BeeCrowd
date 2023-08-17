salario = float(input())

if 0 <= salario <= 400:
    reajuste = salario * 0.15
    salario = salario + reajuste
    percentual = 15
elif 400.01 <= salario <= 800:
    reajuste = salario * 0.12
    salario = salario + reajuste
    percentual = 12
elif 800.01 <= salario <= 1200:
    reajuste = salario * 0.1
    salario = salario + reajuste
    percentual = 10
elif 1200.01 <= salario <= 2000:
    reajuste = salario * 0.07
    salario = salario + reajuste
    percentual = 7
else:
    reajuste = salario * 0.04
    salario = salario + reajuste
    percentual = 4
    
if salario >= 0:
    print("Novo salario: %.2f"% salario)
    print("Reajuste ganho: %.2f"% reajuste)
    print(f'Em percentual: {percentual} %')
else:
    print("Salario nao valido")
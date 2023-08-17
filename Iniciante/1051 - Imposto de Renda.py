salario = float(input())
imposto = 0

if salario > 2000:
    salario = salario - 2000
     
    if salario >= 0:   
        if salario - 1000 >= 0:
            imposto = imposto + 1000 * 0.08
        else:
            imposto = imposto + salario * 0.08
        salario = salario - 1000
     
    if salario >= 0:   
        if salario - 1500 >= 0:
            imposto = imposto + 1500 * 0.18
        else:
            imposto = imposto + salario * 0.18
        salario = salario - 1500
    
    if salario >= 0:    
        imposto = imposto + salario * 0.28
       
if imposto == 0:
    print("Isento")
else:
    print("R$ %.2f"% imposto)
item , qtd = input().split()

item = int(item)
qtd = int(qtd)

if item == 1:
    valor = float(4 * qtd)
elif item == 2:
    valor = float(4.5 * qtd)
elif item == 3:
    valor = float(5 * qtd)
elif item == 4:
    valor = float(2 * qtd)
elif item == 5:
    valor = float(1.5 * qtd)
else:
    print("Item inexistente.")
    
print("Total: R$ %.2f"% valor)
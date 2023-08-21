alcool = 0
gasolina = 0
diesel = 0

while True:
    X = int(input())
    
    if X == 1:
        alcool += 1
    elif X == 2:
        gasolina += 1
    elif X == 3:
        diesel += 1
    elif X == 4:
        break
        
print("MUITO OBRIGADO")
print(f"Alcool: {alcool}")
print(f"Gasolina: {gasolina}")
print(f"Diesel: {diesel}")
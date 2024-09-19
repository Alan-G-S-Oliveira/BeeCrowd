saida = ''

while True:
    A, B, C, X, Y = map(int, input().split())
    if A == 0:
        break

    princesa = [A, B, C]
    princesa.sort(reverse = True)
        
    principe = [X, Y]
    principe.sort(reverse = True)

    saida += str(principe[0] > princesa[1] and principe[1] > princesa[2] and (principe[0] - principe[1]) > 1) + '\n'  
    
print(saida)

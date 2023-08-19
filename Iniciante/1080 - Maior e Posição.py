maior = int(input())
posicao_maior = 0

for i in range(1, 100):
    x = int(input())
    
    if x > maior:
        maior = x
        posicao_maior = i
        
print(maior)
print(posicao_maior + 1)
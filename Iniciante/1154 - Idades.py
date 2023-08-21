n = 0
idades = 0

while True:
    x = int(input())
    
    if x < 0:
        break
        
    idades +=  x
    n += 1

media = idades / n

print(f'{media:.2f}')
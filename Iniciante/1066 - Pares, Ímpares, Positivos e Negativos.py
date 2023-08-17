pares = 0
impares = 0
positivo = 0
negativo = 0

for i in range(0, 5):
    x = int(input())
    
    if x % 2 == 0:
        pares += 1
    else:
        impares += 1
    
    if x > 0:
        positivo += 1
    elif x < 0:
        negativo += 1

print(f"{pares} valor(es) par(es)")
print(f"{impares} valor(es) impar(es)")
print(f"{positivo} valor(es) positivo(s)")
print(f"{negativo} valor(es) negativo(s)")
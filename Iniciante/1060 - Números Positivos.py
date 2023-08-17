positivo = 0

for i in range(1, 7):
    numero = float(input())
    if numero > 0:
        positivo = positivo + 1

print(f'{positivo} valores positivos')
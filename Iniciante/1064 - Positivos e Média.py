x, dia1 = input().split()
hora1, x, minuto1, x, segundo1 = input().split()

x, dia2 = input().split()
hora2, x, minuto2, x, segundo2 = input().split()

dia1 = int(dia1)
hora1 = int(hora1)
minuto1 = int(minuto1)
segundo1 = int(segundo1)
dia2 = int(dia2)
hora2 = int(hora2)
minuto2 = int(minuto2)
media = 0
positivo = 0

for i in range(0, 6):
    x = float(input())
    if x > 0:
        positivo = positivo + 1
        media = media + x
        
media = media / positivo        

print(f'{positivo} valores positivos')
print("%.1f"%media)
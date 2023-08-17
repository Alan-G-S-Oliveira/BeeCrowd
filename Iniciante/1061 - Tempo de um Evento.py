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
segundo2 = int(segundo2)

if segundo1 > segundo2:
    minuto1 = minuto1 + 1
    segundo = (segundo2 + 60) - segundo1
else:
    segundo = segundo2 - segundo1
    
if minuto1 > minuto2:
    hora1 = hora1 + 1
    minuto = (minuto2 + 60) - minuto1
else:
    minuto = minuto2 - minuto1

if hora1 > hora2:
    dia1 = dia1 + 1
    hora = (hora2 + 24) - hora1
else:
    hora = hora2 - hora1
    
dia = dia2 - dia1

print(f'{dia} dia(s)')
print(f'{hora} hora(s)')
print(f'{minuto} minuto(s)')
print(f'{segundo} segundo(s)')
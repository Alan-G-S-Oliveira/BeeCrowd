N = int(input())
numeros = []
for i in range(N):
    numeros.append(int(input()))
numeros.sort()
anterior = numeros[0]
cont = 1
for i in numeros[1:]:
    if i != anterior:
        print(f'{anterior} aparece {cont} vez(es)')
        anterior = i
        cont = 1
    else:
        cont += 1
print(f'{anterior} aparece {cont} vez(es)')

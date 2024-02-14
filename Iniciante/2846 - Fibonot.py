N = int(input())

a1 = a2 = 1
cont = 0
atual = 4
Achou = False

while True:
    aux = a1 + a2
    a1 = a2
    a2 = aux
    for i in range(a1, a2):
        if i != a1 and i != a2:
            cont += 1
            atual = i
        
        if cont == N:
            Achou = True
            break
    
    if Achou:
        print(atual)
        break

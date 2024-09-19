from decimal import Decimal

T = int(input())

for _ in range(T):
    N = int(input())
    alunos = input().split()
    faltas = input().split()
    aux = 0
    for i in range(len(faltas)):
        cont = 0
        for j in faltas[i]:
            if j == 'A':
                cont += 1
        if Decimal(cont) / Decimal(len(faltas[i].replace('M', ''))) > Decimal('0.25'):
            if aux > 0:
                print(' ',end='')
            print(alunos[i],end='')
            aux += 1
    print()

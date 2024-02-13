N = int(input())

Sequencia = []

x0 = x1 = 1

Sequencia.append(x0)
Sequencia.append(x1)

for i in range(2, N):
    aux = x0 + x1
    x0 = x1
    x1 = aux
    Sequencia.append(x1)

for i in range(N - 1, -1, -1):
    print(f'{Sequencia[i]}',end="")
    if(i != 0):
        print(' ',end='')
    else:
        print()
    
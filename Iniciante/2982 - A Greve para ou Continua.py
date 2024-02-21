N = int(input())

gastos = verba = 0

for i in range(N):
    T, C = input().split()
    C = int(C)

    if T == 'G':
        gastos += C
    else:
        verba += C

if verba >= gastos:
    print('A greve vai parar.')
else:
    print('NAO VAI TER CORTE, VAI TER LUTA!')

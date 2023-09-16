A, B, C = input().split()
A = int(A)
B = int(B)
C = int(C)

if A < B + C and B < A + C and C < A + B:
    print('Valido-',end='')
    if A == B == C:
        print('Equilatero')
    elif A == B or A == C or B == C:
        print('Isoceles')
    else:
        print('Escaleno')
    if A ** 2 == B ** 2 + C ** 2 or B ** 2 == A ** 2 + C ** 2 or C ** 2 == A ** 2 + B ** 2:
        print('Retangulo: S')
    else:
        print('Retangulo: N')
else:
    print('Invalido')

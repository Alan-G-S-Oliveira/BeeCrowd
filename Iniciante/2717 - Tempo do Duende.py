N = int(input())

A, B = input().split()
A = int(A)
B = int(B)

if A + B <= N:
    print('Farei hoje!')
else:
    print('Deixa para amanha!')
    
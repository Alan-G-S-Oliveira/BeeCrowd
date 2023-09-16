A, B, C = input().split()
A = int(A)
B = int(B)
C = int(C)

if A == B or A == C or B == C:
    print('S')
elif A + B == C or A + C == B or B + C == A:
    print('S')
else:
    print('N')

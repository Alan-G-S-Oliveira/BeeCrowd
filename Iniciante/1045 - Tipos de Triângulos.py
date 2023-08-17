A, B, C = input().split()

A = float(A)
B = float(B)
C = float(C)

if A >= B + C or B >= A + C or C >= A + B:
    print("NAO FORMA TRIANGULO")
else:
    if pow(A, 2) == pow(B, 2) + pow(C, 2) or pow(B, 2) == pow(A, 2) + pow(C, 2) or pow(C, 2) == pow(A, 2) + pow(B, 2):
        print("TRIANGULO RETANGULO")
    elif pow(A, 2) > pow(B, 2) + pow(C, 2) or pow(B, 2) > pow(A, 2) + pow(C, 2) or pow(C, 2) > pow(A, 2) + pow(B, 2):
        print("TRIANGULO OBTUSANGULO")
    elif pow(A, 2) < pow(B, 2) + pow(C, 2):
        print("TRIANGULO ACUTANGULO")
    
    if A == B == C:
        print("TRIANGULO EQUILATERO")
    elif A == B != C or A == C != B or B == C != A:
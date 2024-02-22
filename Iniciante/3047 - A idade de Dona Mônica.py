M = int(input())
A = int(input())
B = int(input())
C = M - (A + B)

if A > C and A > B:
    print(A)
elif B > C and B > A:
    print(B)
elif C > B and C > A:
    print(C)

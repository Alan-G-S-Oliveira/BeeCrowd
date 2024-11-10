N = int(input())
P, C, Q = input().split()
P, Q = int(P), int(Q)

if C == '+':
    print('OK' if P + Q <= N else 'OVERFLOW')
else:
    print('OK' if P * Q <= N else 'OVERFLOW')
    
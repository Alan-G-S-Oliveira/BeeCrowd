A, B, C = input().split()
A = int(A)
B = int(B)
C = int(C)

if A > B:
    if B <= C:
        print(':)')
    elif abs(B - C) < abs(B - A):
        print(':)')
    else:
        print(':(')
elif A < B:
    if B >= C:
        print(':(')
    elif abs(B - C) < abs(B - A):
        print(':(')
    else:
        print(':)')
else:
    if B < C:
        print(':)')
    else:
        print(':(')

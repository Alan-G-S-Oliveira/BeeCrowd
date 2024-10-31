P1, C1, P2, C2 = map(int, input().split())

R1 = P1 * C1
R2 = P2 * C2

if R1 > R2:
    print(-1)
elif R1 == R2:
    print(0)
else:
    print(1)

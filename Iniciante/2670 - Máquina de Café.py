A1 = int(input())
A2 = int(input())
A3 = int(input())

P1 = A1 * 0 + A2 * 1 + A3 * 2
P2 = A1 * 1 + A2 * 0 + A3 * 1
P3 = A1 * 2 + A2 * 1 + A3 * 0

if P1 <= P2 <= P3 or P1 <= P3 <= P2:
    print(2 * P1)
elif P2 <= P1 <= P3 or P2 <= P3 <= P1:
    print(2 * P2)
else:
    print(2 * P3)

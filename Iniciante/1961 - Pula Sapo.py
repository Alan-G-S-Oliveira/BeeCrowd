P, N = input().split()
P = int(P)
N = int(N)

cano = input().split()
ganha = True

for i in range(len(cano)):
    cano[i] = int(cano[i])

for i in range(1, len(cano)):
    if abs(cano[i] - cano[i - 1]) > P:
        ganha = False
        break

if ganha:
    print('YOU WIN')
else:
    print('GAME OVER')

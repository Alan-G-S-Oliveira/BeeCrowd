Q = int(input())
V = input().split()

aprovados = 0
reprovados = 0
for i in V:
    if i == '0':
        aprovados += 1
    else:
        reprovados += 1
if aprovados > reprovados:
    print('Y')
else:
    print('N')

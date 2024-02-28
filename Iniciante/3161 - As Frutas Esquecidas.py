N, M = list(map(int, input().split()))

frutas = []
for i in range(N):
    frutas.append(input().lower())

saida = ''
fruta = ''

for i in range(M):
    fruta += input().lower()

for i in frutas:
    if not(i in saida):
        if i in fruta:
            saida += 'Sheldon come a fruta {}\n'.format(i)
        elif i[::-1] in fruta:
            saida += 'Sheldon come a fruta {}\n'.format(i)
        else:
            saida += 'Sheldon detesta a fruta {}\n'.format(i)

print(saida,end='')

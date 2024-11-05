N = int(input())
frase = input().split()
saida = ''
for i in range(N):
    if len(frase[i]) == 3 and (frase[i][:2] == 'UR' or frase[i][:2] == 'OB'):
        saida += frase[i][:2] + 'I'
    else:
        saida += frase[i]
    if i != N - 1:
        saida += ' '
print(saida)

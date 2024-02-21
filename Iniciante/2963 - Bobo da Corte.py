N = int(input())
votos = []

for i in range(N):
    votos.append(int(input()))

maior = votos[0]
maiorPosicao = 0
for i in range(1, N):
    if votos[i] > maior:
        maior = votos[i]
        maiorPosicao = i

if maiorPosicao == 0:
    print('S')
else:
    print('N')

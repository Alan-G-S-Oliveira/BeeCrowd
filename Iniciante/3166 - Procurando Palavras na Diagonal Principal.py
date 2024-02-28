N, M, P = list(map(int, input().split()))

X = []
for i in range(N):
    X.append(input().lower())

Tabuleiro = []
for i in range(M):
    Tabuleiro.append(input().lower())

Palavras = []
Posicao = []

for i in range(M - 1):
    aux = ''
    for j in range(P - i):
        aux += Tabuleiro[j][j + i]
    Palavras.append(aux)
    if i == 0:
        Posicao.append(0)
    else:
        Posicao.append(1)

for i in range(P - 1):
    aux = ''
    for j in range(M - i):
        aux += Tabuleiro[j + i][j]
    if not(aux in Palavras):
        Palavras.append(aux)
        Posicao.append(2)

Saida = []
PosicaoSaida = []

for i in range(len(Palavras)):
    for j in range(N):
        if (X[j] in Palavras[i]) or (X[j][::-1] in Palavras[i]):
            Saida.append(X[j])
            PosicaoSaida.append(Posicao[i])

for i in range(N):
    if X[i] in Saida:
        if PosicaoSaida[Saida.index(X[i])] == 0:
            print(f'1 Palavra "{X[i]}" na diagonal principal')
        elif PosicaoSaida[Saida.index(X[i])] == 1:
            print(f'2 Palavra "{X[i]}" acima da diagonal principal')
        else:
            print(f'3 Palavra "{X[i]}" abaixo da diagonal principal')
    else:
        print(f'4 Palavra "{X[i]}" inexistente')

N, M = map(int, input().split())
matriz = []
for _ in range(N):
    matriz.append(list(map(int, input().split())))
jogadores = 0
for i in range(N):
    gols = 0
    for j in range(M):
        if matriz[i][j] != 0:
            gols += 1
    if gols == M:
        jogadores += 1

print(jogadores)

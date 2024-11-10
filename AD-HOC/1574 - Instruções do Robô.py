instrucoes = {
    'LEFT': -1,
    'RIGHT': 1
}

T = int(input())
for _ in range(T):
    N = int(input())
    X = 0
    historico = []
    for _ in range(N):
        aux = input().split()
        if len(aux) == 3:
            X += historico[int(aux[2]) - 1]
            historico.append(historico[int(aux[2]) - 1])
        else:
            X += instrucoes[aux[0]]
            historico.append(instrucoes[aux[0]])
    print(X)

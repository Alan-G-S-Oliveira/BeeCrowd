while True:

    try:

        M = int(input())

        trajeto = []
        toques = 0
        posicao = 1

        for i in range(M):
            L, C, R = list(map(int, input().split()))

            trajeto.append([L, C, R])
            
        for i in range(M):
            if trajeto[i][posicao] == 1:
                if posicao == 1:
                    if trajeto[i][0] == 0:
                        toques += 1
                        posicao = 0
                    else:
                        toques += 1
                        posicao = 2
                elif posicao == 0:
                    if trajeto[i][1] == 0:
                        toques += 1
                        posicao = 1
                    else:
                        toques += 2
                        posicao = 2
                else:
                    if trajeto[i][1] == 0:
                        toques += 1
                        posicao = 1
                    else:
                        toques += 2
                        posicao = 0

        if M != 0:
            print(toques)
    except EOFError:
        break

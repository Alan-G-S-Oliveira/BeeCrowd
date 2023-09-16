while True:
    try:
        N, D = input().split()
        N = int(N)
        D = int(D)
        matriz = []

        for i in range(D):
            data = input()
            data = data.replace('/', ' ')
            resposta = data.split()
            matriz.append(resposta)

        achou = False
        for i in range(D):
            vai = True
            for j in range(1, N + 1):
                if matriz[i][len(matriz[i]) - j] == '0':
                    vai = False
                    break
                dia = [matriz[i][0], matriz[i][1], matriz[i][2]]
            if vai:
                achou = True
                break
            
        if achou:
            print(f'{dia[0]}/{dia[1]}/{dia[2]}')
        else:
            print('Pizza antes de FdI')
    except EOFError:
        break

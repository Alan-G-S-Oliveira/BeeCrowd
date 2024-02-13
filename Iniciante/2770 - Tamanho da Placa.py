while True:

    try:
        X, Y, M = map(int, input().split())

        lista = []

        for i in range(M):

            C = input().split()

            C[0] = int(C[0])
            C[1] = int(C[1])

            lista.append(C)

        for i in range(M):

            if((lista[i][0] <= X and lista[i][1] <= Y) or (lista[i][0] <= Y and lista[i][1] <= X)):
                print('Sim')
            else:
                print('Nao')
    
    except EOFError:
        break

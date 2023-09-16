while True:
    try:
        N = int(input())
        M, L = input().split()

        M = int(M)
        L = int(L)
        marcos = []
        leonardo = []
        for i in range(M):
            linha =  input().split()
            for j in range(N):
                linha[j] = int(linha[j])
            marcos.append(linha)
        for i in range(L):
            linha =  input().split()
            for j in range(N):
                linha[j] = int(linha[j])
            leonardo.append(linha)

        Cm, Cl = input().split()
        Cm = int(Cm)
        Cl = int(Cl)
        A = int(input())

        if marcos[Cm - 1][A - 1] > leonardo[Cl - 1][A - 1]:
            print('Marcos')
        elif marcos[Cm - 1][A - 1] < leonardo[Cl - 1][A - 1]:
            print('Leonardo')
        else:
            print('Empate')
    except EOFError:
        break

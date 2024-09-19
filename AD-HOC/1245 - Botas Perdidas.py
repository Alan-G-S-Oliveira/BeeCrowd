while True:
    try:
        N = int(input())

        cont = 0
        tamanhos = []
        quantidades = []
        for i in range(N):
            M, L = input().split()
            try:
                X = tamanhos.index(M)
                if quantidades[X] != L:
                    tamanhos.pop(X)
                    quantidades.pop(X)
                    cont += 1
                else:
                    raise Exception
            except Exception:
                tamanhos.append(M)
                quantidades.append(L)
        print(cont)            

    except EOFError:
        break
    
while True:
    try:

        N, L, C = map(int, input().split())
        conto = input().split()

        palavras = len(conto[0]) + 1
        linhas = 1
        paginas = 1
        for i in conto[1:]:
            if palavras + len(i) < C:
                palavras += (len(i) + 1)
            elif palavras + len(i) == C:
                palavras += len(i)
            else:
                palavras = len(i) + 1
                if linhas < L:
                    linhas += 1
                else:
                    linhas = 1
                    paginas += 1
        print(paginas)

    except Exception:
        break
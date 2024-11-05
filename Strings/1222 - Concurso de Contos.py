while True:
    try:

        N, L, C = map(int, input().split())
        conto = input().split()

        pagina = 0
        palavra = 0
        linha = 0
        for i in range(N):
            atual = len(conto[i])
            if atual + palavra > C:
                palavra += (atual + 1)
            elif atual + pagina == C:
                palavra += atual
            else:
                palavra = atual
                if linha < L:
                    linha += 1
                else:
                    linha = 1
                    pagina += 1

        print(pagina)    

    except Exception:
        break
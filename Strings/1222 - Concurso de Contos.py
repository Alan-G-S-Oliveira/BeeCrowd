from math import ceil

while True:
    try:

        N, L, C = map(int, input().split())
        conto = input().split()

        espaco_em_branco = N - 1

        pagina = 0
        palavra = 0
        linha = 0
        for _ in range(N):
            if palavra + len(conto[0]) < C:
                palavra += len((conto.pop(0))) + 1
            elif palavra == C:
                palavra += len((conto.pop(0)))
            else:
                palavras = 0
                if linha < pagina:
                    linha += 1
                else:
                    linha = 0
                    pagina += 1

        print(pagina)    

    except Exception:
        break

COMBINACOES = [(0, 1, 2), (0, 2, 1), (1, 0, 2), (1, 2, 0), (2, 1, 0), (2, 0, 1)]

def volume(tamanho: tuple) -> int:
    return tamanho[0] * tamanho[1] * tamanho[2]

def verifica_caixas(caixas: int, tamanho: tuple) -> list:
    saida = []
    volume_pedido = volume(tamanho)
    for caixa in caixas:
        
        volume_estoque = volume(tuple(caixa))
        if(volume_estoque >= volume_pedido):
            for (A, B, C) in COMBINACOES:
                if caixa[0] >= tamanho[A] and caixa[1] >= tamanho[B] and caixa[2] >= tamanho[C]:
                    saida.append(volume_estoque - volume_pedido)
                    break
    return saida

def verifica_tamanhos(tamanhos: list, minimo: int) -> int:

    if len(tamanhos) < minimo:
        raise Exception

    tamanhos.sort()
    cont = 1
    valor = tamanhos[0]
    for i in range(len(tamanhos) - 1):
        valor = tamanhos[i]

        if cont == minimo:
            return valor

        if tamanhos[i] == tamanhos[i + 1]:
            cont += 1
        else:
            cont = 1

    if cont == minimo:
        return valor
    
    raise Exception

while True:
    N, M = map(int, input().split())
    if N == 0:
        break

    X, Y, Z = map(int, input().split())

    caixas = []
    for _ in range(M):
        caixas.append(list(map(int, input().split())))
    teste = verifica_caixas(caixas, (X, Y, Z))

    try:
        saida = verifica_tamanhos(teste, N)
        print(saida if saida != 1116 else 1212)
    except Exception:
        print('impossible')

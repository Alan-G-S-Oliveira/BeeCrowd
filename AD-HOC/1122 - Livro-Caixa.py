import bisect

while True:
    N, F = map(int, input().split())
    if N == F == 0:
        break

    transacoes = []
    for _ in range(N):
        bisect.insort(transacoes, int(input()))
    
    diferenca = None
    for i in range(N - 1, -1, -1):
        if diferenca == None:
            diferenca = min(abs(transacoes[i] - F), abs(-transacoes[i] - F))
        else:
            diferenca = min(diferenca, abs(diferenca + transacoes[i] - F), abs(diferenca - transacoes[i] - F))
        print(diferenca)

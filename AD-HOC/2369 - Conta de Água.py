N = int(input())

saida = 7
if N > 10:
    saida += min(N, 30) - 10
if N > 30:
    saida += (min(N, 100) - 30) * 2
if N > 100:
    saida += (N - 100) * 5

print(saida)    
    
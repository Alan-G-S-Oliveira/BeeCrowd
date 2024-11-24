from math import log2, ceil

N = int(input())
for _ in range(N):
    saida  = ceil(log2(float(input())))
    print(f'{saida} dias')    

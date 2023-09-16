def raiz(i, N):

    if i <= N:
        return 1 / (6 + raiz(i + 1, N))
    return 0
    
N = int(input())
raizN = 3

raizN += raiz(1, N)

print(f'{raizN:.10f}')

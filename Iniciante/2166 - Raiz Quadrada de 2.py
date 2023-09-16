def raiz(i, N):
    if i < N:
        return(1 / (2 + raiz(i + 1, N)))
    return 0

N = int(input())

raizN = 1 + raiz(0, N)
print(f'{raizN:.10f}')

import math

N = int(input())
minimo = N / math.log(N)
maximo = 1.25506 * N / math.log(N)

print(f'{minimo:.1f} {maximo:.1f}')

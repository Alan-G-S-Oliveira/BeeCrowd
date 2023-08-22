N = int(input())

for i in range(0, N):
    X = int(input())
    soma = 0

    for j in range(1, X):
        if X % j == 0:
            soma += j

    if soma == X:
        print(f'{X} eh perfeito')
    else:
        print(f'{X} nao eh perfeito')
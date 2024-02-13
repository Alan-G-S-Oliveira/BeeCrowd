N = int(input())

sequencia = input().split()

cont = 1

if N > 2:
    for i in range(N):
        sequencia[i] = int(sequencia[i])

    diferenca = sequencia[1] - sequencia[0]
    for i in range(1, N - 1):
        if (sequencia[i + 1] - sequencia[i] != diferenca):

            diferenca = sequencia[i + 1] - sequencia[i]
            cont += 1

print(cont)

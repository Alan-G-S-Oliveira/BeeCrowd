vetor = input().split()

A = int(vetor[0])
N = int(vetor[-1])
soma = 0

for i in range(0, N):
    soma += (A + i)

print(soma)

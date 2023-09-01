N, M = input().split()

N = int(N)
M = int(M)

for i in range(M):
    acao = input()
    if acao == 'fechou':
        N += 1
    else:
        N -= 1

print(N)

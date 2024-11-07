N, K = map(int, input().split())

alunos = []
for _ in range(N):
    alunos.append(input())

alunos.sort()
print(alunos[K - 1])

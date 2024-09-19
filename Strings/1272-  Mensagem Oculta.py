N = int(input())

aux = lambda x: x[0]

for _ in range(N):
    texto = input().split()
    print(''.join(aux(i) for i in texto))
    
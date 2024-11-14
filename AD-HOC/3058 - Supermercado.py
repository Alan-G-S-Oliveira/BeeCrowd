N = int(input())

precos = []
for _ in range(N):
    P, G = input().split()
    precos.append((float(P), int(G)))

menor = min(precos, key=lambda x: x[0] / x[1])

print('%.2f' % ((menor[0] * 1000) / menor[1]))

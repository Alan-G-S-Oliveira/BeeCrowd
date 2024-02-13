N, C, M = map(int, input().split())

X = input().split()
Y = input().split()

for i in range(C):
    X[i] = int(X[i])
for i in range(M):
    Y[i] = int(Y[i])

repetidas = []
cont = 0

for i in Y:
    if i in X and not(i in repetidas):
        cont += 1
        repetidas.append(i)
    
print(C - cont)

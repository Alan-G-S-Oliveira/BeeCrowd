N = int(input())

V = []
for _ in range(N):
    V.append(input())
cont = 1
for i in range(1, N): 
    if V[i] != V[i - 1]:
        cont += 1
print(cont)

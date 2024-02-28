N = int(input())
naves = []
distancias = []

for i in range(N):
    X, Y, Z = list(map(int, input().split()))
    naves.append([X, Y, Z])

for i in range(N):
    k = 0
    for j in range(N):
        if i != j:
            distancia = ((naves[i][0] - naves[j][0]) ** 2 + (naves[i][1] - naves[j][1]) ** 2 + (naves[i][2] - naves[j][2]) ** 2) ** 0.5
            if  k == 0:
                distancias.append(distancia)
            elif distancia < distancias[i]:
                distancias[i] = distancia
            k += 1

for i in range(N):
    if distancias[i] <= 20:
        print('A')
    elif 20 < distancias[i] <= 50:
        print('M')
    else:
        print('B') 

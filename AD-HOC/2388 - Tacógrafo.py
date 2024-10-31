N = int(input())

distancia = 0
for _ in range(N):
    T, V = map(int, input().split())
    distancia += (T * V)
print(distancia)

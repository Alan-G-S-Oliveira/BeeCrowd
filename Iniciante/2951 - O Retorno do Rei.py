N, G = list(map(int, input().split()))

runas = {}

for i in range(N):
    R, V = input().split()
    V = int(V)

    runas.setdefault(R, V)

X = int(input())

runas_recitadas = input().split()

soma = 0
for i in range(X):
    soma += runas[runas_recitadas[i]]

print(soma)
if soma >= G:
    print('You shall pass!')
else:
    print('My precioooous')

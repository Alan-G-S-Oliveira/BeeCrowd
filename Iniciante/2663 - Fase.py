N = int(input())
Q = int(input())
notas = []

for i in range(N):
    notas.append(int(input()))

notas.sort(reverse = True)

classificados = notas[:Q]

for i in range(Q, N):
    if notas[i] == classificados[-1]:
        classificados.append(notas[i])
    else:
        break

print(len(classificados))

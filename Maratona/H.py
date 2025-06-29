def desgraca(entrada: str, i: int, j: int) -> str:
    saida = ''

    n = len(entrada)
    for k in range(n):
        if k != i and k != j:
            saida += entrada[k]
        else:
            saida += '1'

    return saida

X = bin(int(input()))
X = X[2:]

T = int(X, 2)

N = len(X)

saida = '0' * (N - 1) + '1'

while True:
    aux = '1' + saida[1:]
    saida = aux
    if int(saida, 2) <= T:
        break
    saida = saida[1:]

i = 1
j = len(saida) - 2

while i <= j:
    aux = desgraca(saida, i, j)
    if int(aux, 2) <= T:
        saida = aux
    i += 1
    j -= 1

print(int(saida, 2))

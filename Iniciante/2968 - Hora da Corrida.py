V, N = list(map(int, input().split()))

totalPlacas = V * N
saida = ''
for i in range(1, 10):
    auxInt = int((totalPlacas * i) / 10)
    auxFloat = (totalPlacas * i) / 10

    if auxInt != auxFloat:
        auxInt += 1

    saida += str(auxInt)
    if i != 9:
        saida += ' '

print(saida)

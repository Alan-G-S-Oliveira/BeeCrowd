qtd_jipes = 0
qtd_turistas = 0

while True:
    string = input()

    if string == 'ABEND':
        break

    X, T = string.split()
    T = int(T)

    if X == 'SALIDA':
        qtd_jipes += 1
        qtd_turistas += T
    else:
        qtd_jipes -= 1
        qtd_turistas -= T

print(qtd_turistas)
print(qtd_jipes)

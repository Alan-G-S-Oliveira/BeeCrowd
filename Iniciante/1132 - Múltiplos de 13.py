X = int(input())
Y = int(input())
soma = 0

if X > Y:
    aux = X
    X = Y
    Y = aux

while X <= Y:
    if X % 13 != 0:
        soma += X
    X += 1

print(soma)
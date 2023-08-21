X = int(input())

while True:
    Z = int(input())

    if Z > X:
        break

soma = (2 * X) + 1
qtd = 2
X += 2

while soma <=  Z:
    soma += X
    qtd += 1
    X += 1

print(qtd)
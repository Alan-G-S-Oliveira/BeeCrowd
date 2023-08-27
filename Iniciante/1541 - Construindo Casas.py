import math

while True:
    X = input().split()

    if X[0] == '0':
        break

    A = int(X[0])
    B = int(X[1])
    C = int(X[2]) / 100

    area = A * B
    area_total = area / C

    lado = math.floor(math.sqrt(area_total))

    print(lado)
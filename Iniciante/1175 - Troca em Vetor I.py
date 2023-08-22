N = []

for i in range(0, 20):
    x = int(input())
    N.append(x)

for i in range(0, 10):
    aux = N[i]
    N[i] = N[19 - i]
    N[19 - i] = aux

for i in range(0, 20):
    print(f'N[{i}] = {N[i]}')
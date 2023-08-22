x = []

for i in range(0, 10):
    n = int(input())
    x.append(n)

for i in range(0, 10):
    if x[i] <= 0:
        x[i] = 1
    print(f'X[{i}] = {x[i]}')
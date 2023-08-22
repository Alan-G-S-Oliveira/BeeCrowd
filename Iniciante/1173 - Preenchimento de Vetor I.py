N = int(input())

x = []
x.append(N)

for i in range(1, 10):
    x.append(x[i - 1] * 2)

for i in range(0, 10):
    print(f'N[{i}] = {x[i]}')
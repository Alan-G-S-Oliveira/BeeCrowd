N = []
X = float(input())
N.append(X)
ant = X

for i in range(1, 100):
    N.append(ant / 2)
    ant = ant / 2

for i in range(0, 100):
    print(f'N[{i}] = {N[i]:.4f}')
N = []
T = int(input())
i = 1

while i <= 1000:
    for j in range(0, T):
        N.append(j)
        i += 1

for i in range(0, 1000):
    print(f'N[{i}] = {N[i]}')
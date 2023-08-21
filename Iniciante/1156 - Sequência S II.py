S = 1

for i in range(1, 19):
    S += ((2 * i) + 1) / pow(2, i)

print(f'{S:.2f}')
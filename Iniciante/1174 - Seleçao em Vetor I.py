A = []

for i in range(0, 100):
    n = float(input())
    A.append(n)

for i in range(0, 100):
    if A[i] <= 10:
        print(f'A[{i}] = {A[i]:.1f}')
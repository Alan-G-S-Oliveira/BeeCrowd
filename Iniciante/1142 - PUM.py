N = int(input())
i = 1
k = 1
while i <= N:
    for j in range(0, 3):
        print(f"{k} ", end='')
        k += 1
    i += 1
    k += 1
    print("PUM")
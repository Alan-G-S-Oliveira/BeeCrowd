NC = int(input())

for i in range(NC):
    n, k = list(map(int, input().split()))

    ultimo = 0
    for j in range(1, n + 1):
        ultimo = (ultimo + k) % j

    print(f'Case {i + 1}: {ultimo + 1}')
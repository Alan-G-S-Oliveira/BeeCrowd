while True:
    n = int(input())
    if n == 0:
        break
    x = list(map(int, input().split()))
    maior_1 = max(x[0], x[1])
    maior_2 = min(x[0], x[1])
    indice_1 = 0 if x[0] > x[1] else 1
    indice_2 = 0 if x[0] < x[1] else 1

    for i in range(2, n):
        if x[i] > maior_1:
            maior_2 = maior_1
            maior_1 = x[i]
            indice_2 = indice_1
            indice_1 = i
        elif x[i] > maior_2:
            maior_2 = x[i]
            indice_2 = i
    print(indice_2 + 1)

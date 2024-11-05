T = int(input())
for _ in range(T):
    A, B = input().split()

    saida = 0
    for (i, j) in zip(A, B):
        saida += ord(j) - ord(i) if ord(i) <= ord(j) else ord(j) + 26 - ord(i) 
    print(saida)

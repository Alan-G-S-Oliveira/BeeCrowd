N = int(input())

for i in range(N):
    L = int(input())
    saida = 0
    for j in range(L):
        S = input()
        for k in range(len(S)):
            saida += (ord(S[k]) - ord('A')) + j + k
    print(saida)
    
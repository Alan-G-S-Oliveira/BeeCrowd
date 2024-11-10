C = int(input())
for _ in range(C):
    X = input()
    saida = ''.join(i if ord('a') <= ord(i) <= ord('z') else '' for i in X)
    print(saida[::-1])

C = int(input())
for _ in range(C):
    B, E = (map(int, input().split()))
    lista = ''
    for i in range(E - B + 1):
        lista += str(B + i)
    print(lista + lista[::-1])

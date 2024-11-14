letras = ['a', 'e', 'i', 'o', 's']

T = int(input())
for _ in range(T):
    N = input()
    saida = 1
    for i in N:
        if i.lower() in letras:
            saida *= 3
        else:
            saida *= 2
    print(saida)

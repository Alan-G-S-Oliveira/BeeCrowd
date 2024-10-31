cont = 0

while True:
    N = int(input())
    if N == 0:
        break

    textos = []
    for _ in range(N):
        aux = input().split()
        texto = ''.join(i + ' ' for i in aux)
        texto = texto[:-1]
        textos.append(texto)

    if cont != 0:
        print()

    maior = len(max(textos, key=lambda x: len(x)))
    for i in textos:
        print(' ' * (maior - len(i)) + i)
    cont += 1

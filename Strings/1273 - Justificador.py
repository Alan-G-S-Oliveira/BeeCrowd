cont = 0

while True:
    N = int(input())
    if N == 0:
        break
    if cont != 0:
        print()

    texto = []
    for _ in range(N):
        texto.append(input().replace(' ', ''))

    maior = len(max(texto, key= lambda x: len(x)))
    for i in texto:
        print((' ' * (maior - len(i))) + i)
    cont += 1

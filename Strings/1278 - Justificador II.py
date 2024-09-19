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
        print(textos)

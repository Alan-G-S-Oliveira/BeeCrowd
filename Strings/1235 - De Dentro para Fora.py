N = int(input())

for _ in range(N):
    frase = input()
    tamanho = len(frase) // 2
    saida = (frase[:tamanho])[::-1] + (frase[tamanho:])[::-1]
    print(saida)

N = int(input())

def desloca_direita(entrada: str) -> str:
    saida = ''
    for i in entrada:
        if i.isalpha():
            saida += chr(ord(i) + 3)
        else:
            saida += i
    return saida

def desloca_esquerda(entrada: str) -> str:
    tamanho = len(entrada)
    
    saida = entrada[:(tamanho // 2)]
    for i in range(tamanho // 2, tamanho):
        saida += chr(ord(entrada[i]) - 1)
    return saida

for _ in range(N):
    M = input()
    
    M = desloca_direita(M)
    M = M[::-1]
    M = desloca_esquerda(M)

    print(M)

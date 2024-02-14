vogais = ('a', 'e', 'i', 'o', 'u')

def cifra(Frase1, Frase2:list) -> str:

    cifrar = ''

    for i in range(len(Frase1)):
        for j in range(len(Frase1[i])):

            Aux = ''

            if not(Frase1[i][0] in vogais):
                linha = ord(Frase2[i][j]) - ord('a')
                coluna = ord(Frase1[i][j]) - ord('a')
                cifrar += chr(ord('a') + (+ linha + coluna) % 26)
            else:
                cifrar += Frase1[i]
                break
        if i != len(Frase1) - 1:
            cifrar += ' '

    return cifrar

K = input()
N = int(input())

for i in range(N):
    Frase1 = input().split()
    Frase2 = []

    k = 0
    for j in range(len(Frase1)):

        Aux = ''

        if not(Frase1[j][0] in vogais):

            for l in range(len(Frase1[j])):
                Aux += K[k]
                k = (k + 1) % len(K)
        else:
            Aux = Frase1[j]
        Frase2.append(Aux)

    print(cifra(Frase1, Frase2)) 

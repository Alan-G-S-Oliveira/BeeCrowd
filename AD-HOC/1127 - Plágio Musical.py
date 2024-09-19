notas = {

    'A': 2,
    'B': 4,
    'C': 5,
    'D': 7,
    'E': 9,
    'F': 10,
    'G': 12   

}

def converte(nota):
    saida = notas[nota[0]]
    try:
        if nota[1] == '#':
            saida += 1
        else:
            saida -= 1
    except IndexError:
        pass
    return saida


def conversao(musica):
    notas = list(map(converte, musica))
    saida = ''
    for i in range(len(notas) - 1):
        if notas[i] > notas[i + 1]:
            aux = 12 - notas[i]
            aux += notas[i + 1]
            saida += (str(aux))
        else:
            saida += (str(notas[i + 1] - notas[i]))

    return saida

while True:
    M, T = list(map(int, input().split()))
    if M == T == 0:
        break

    musica1 = input().split()
    musica2 = input().split()

    saida1 = conversao(musica1)
    saida2 = conversao(musica2)

    if saida2 in saida1:
        print('S')
    else:
        print('N')

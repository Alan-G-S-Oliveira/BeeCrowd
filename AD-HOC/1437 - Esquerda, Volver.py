direcoes = {
    1:'O',
    2:'N',
    3:'L',
    4:'S'
}

while True:
    N = int(input())
    if N == 0:
        break

    C = input()
    saida = 2
    for i in C:
        if i == 'E':
            saida -= 1
            if saida == 0:
                saida = 4
        else:
            saida += 1
            if saida == 5:
                saida = 1
            
    print(direcoes[saida])

def ler_teclado():
    saida = []
    for i in range(9):
        aux = input()
        if aux == '0':
            return aux
        saida.append(list(aux))
    return saida

def verifica(posicoes, possivel_pulo):
    if 1 <= possivel_pulo[1] <= 8:
        opcao1 = [possivel_pulo[0] + 1, possivel_pulo[1] - 1]
        opcao2 = [possivel_pulo[0] + 1, possivel_pulo[1] + 1]
        if not(opcao1 in posicoes or opcao2 in posicoes):
            return True
    return False

def retorna_quantidades(posicoes, possivel_pulo, horizontal):
    quantidades = 0
    if horizontal:    
        incremento = 1
    else:
        incremento = 2
    if 1 <= possivel_pulo[0] <= 8:
        possivel_pulo[1] = posicoes[0][1] - incremento
        if verifica(posicoes, possivel_pulo):
            quantidades += 1
        possivel_pulo[1] = posicoes[0][1] + incremento
        if verifica(posicoes, possivel_pulo):
            quantidades += 1
    return quantidades

contador = 1
while True:
    posicoes = ler_teclado()
    if posicoes == '0':
        break

    for i in range(9):
        posicoes[i][0] = int(posicoes[i][0])
        posicoes[i][1] = ord(posicoes[i][1]) - ord('a') + 1

    quantidades = 0
    possivel_pulo = [0] * 2
    possivel_pulo[0] = posicoes[0][0] - 2
    quantidades += retorna_quantidades(posicoes, possivel_pulo, True)
    possivel_pulo[0] = posicoes[0][0] + 2
    quantidades += retorna_quantidades(posicoes, possivel_pulo, True)
    possivel_pulo[0] = posicoes[0][0] - 1
    quantidades += retorna_quantidades(posicoes, possivel_pulo, False)
    possivel_pulo[0] = posicoes[0][0] + 1
    quantidades += retorna_quantidades(posicoes, possivel_pulo, False)

    print(f'Caso de Teste #{contador}: {quantidades} movimento(s).')
    contador += 1

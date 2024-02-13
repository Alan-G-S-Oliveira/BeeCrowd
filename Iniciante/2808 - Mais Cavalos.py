dicionario1 = {

    'a': 1,
    'b': 2,
    'c': 3,
    'd': 4,
    'e': 5,
    'f': 6,
    'g': 7,
    'h': 8

}

dicionario2 = {

    '1': 1,
    '2': 2,
    '3': 3,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 7,
    '8': 8

}

origem, destino = input().split()

if dicionario1[origem[0]] + 2 == dicionario1[destino[0]]:
    if dicionario2[origem[1]] + 1 == dicionario2[destino[1]]:
        print('VALIDO')
    elif dicionario2[origem[1]] - 1 == dicionario2[destino[1]]:
        print('VALIDO')
    else:
        print('INVALIDO')
elif dicionario1[origem[0]] - 2 == dicionario1[destino[0]]:
    if dicionario2[origem[1]] + 1 == dicionario2[destino[1]]:
        print('VALIDO')
    elif dicionario2[origem[1]] - 1 == dicionario2[destino[1]]:
        print('VALIDO')
    else:
        print('INVALIDO')
elif dicionario2[origem[1]] + 2 == dicionario2[destino[1]]:
    if dicionario1[origem[0]] + 1 == dicionario1[destino[0]]:
        print('VALIDO')
    elif dicionario1[origem[0]] - 1 == dicionario1[destino[0]]:
        print('VALIDO')
    else:
        print('INVALIDO')
elif dicionario2[origem[1]] - 2 == dicionario2[destino[1]]:
    if dicionario1[origem[0]] + 1 == dicionario1[destino[0]]:
        print('VALIDO')
    elif dicionario1[origem[0]] - 1 == dicionario1[destino[0]]:
        print('VALIDO')
    else:
        print('INVALIDO')
else:
    print('INVALIDO')

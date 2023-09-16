alimentos = {

    'suco de laranja': 120,
    'morango fresco': 85,
    'mamao': 85,
    'goiaba vermelha': 70,
    'manga': 56,
    'laranja': 50,
    'brocolis': 34

}

while True:
    T = int(input())
    C = 0

    if T == 0:
        break

    for i in range(T):
        caso = input()
        for j in range(len(caso)):
            if caso[j] == ' ':
                x = j
                break

        qtd = int(caso[:x])
        alimento = caso[x + 1:]

        C += qtd * alimentos[alimento]

    if C < 110:
        print(f'Mais {110 - C} mg')
    elif C > 130:
        print(f'Menos {C - 130} mg')
    else:
        print(f'{C} mg')

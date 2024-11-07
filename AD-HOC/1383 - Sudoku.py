def verifica_quadrado(tabuleiro: list, x: int, y: int) -> bool:
    numeros = set()
    for i in range(3):
        for j in range(3):
            numeros.add(tabuleiro[x + i][y + j])
    return len(numeros) == 9

def verifica_linha(tabuleiro: list, x: int) -> bool:
    numeros = set()
    for i in range(9):
        numeros.add(tabuleiro[x][i])
    return len(numeros) == 9

def verifica_coluna(tabuleiro: list, x: int) -> bool:
    numeros = set()
    for i in range(9):
        numeros.add(tabuleiro[i][x])
    return len(numeros) == 9

N = int(input())
for n in range(N):
    sudoku = []
    for _ in range(9):
        sudoku.append(list(map(int, input().split())))
    valido = True
    for i in range(0, 9, 3):
        for j in range(0, 9, 3):
            valido = verifica_quadrado(sudoku, i, j)
            if not(valido):
                i = 10
                break
    if valido:
        for i in range(9):
            valido = verifica_linha(sudoku, i)
            if not(valido):
                break
        if valido:
            for i in range(9):
                valido = verifica_coluna(sudoku, i)
                if not(valido):
                    break
    print(f'Instancia {n + 1}')
    if valido:    
        print('SIM') 
    else:
        print("NAO")
    print()
    
virarDireita = {

    'N': 'L',
    'L': 'S',
    'S': 'O',
    'O': 'N'

}

virarEsquerda = {

    'N': 'O',
    'O': 'S',
    'S': 'L',
    'L': 'N'

}

while True:
    N, M, S = list(map(int, input().split()))
    if N == M == S == 0:
        break
    
    pista = []
    for i in range(N):
        pista.append(list(input()))

    for i in range(N):
        for j in range(M):
            if pista[i][j] == 'N' or pista[i][j] == 'S' or pista[i][j] == 'L' or pista[i][j] == 'O':
                I = i
                J = j
                break
    
    passos = list(input())

    figurinhas = 0
    for i in range(S):
        if passos[i] == 'D':
            pista[I][J] = virarDireita[pista[I][J]]
        elif passos[i] == 'E':
            pista[I][J] = virarEsquerda[pista[I][J]]
        else:
            anterior = pista[I][J]
            if pista[I][J] == 'N':
                if I != 0 and pista[I - 1][J] != '#':
                    anterior = pista[I - 1][J]
                    pista[I - 1][J] = pista[I][J]
                    pista[I][J] = '.'
                    I -= 1
            elif pista[I][J] == 'S':
                if I != (N - 1) and pista[I + 1][J] != '#':
                    anterior = pista[I + 1][J]
                    pista[I + 1][J] = pista[I][J]
                    pista[I][J] = '.'
                    I += 1
            elif pista[I][J] == 'O':
                if J != (0) and pista[I][J - 1] != '#':
                    anterior = pista[I][J - 1]
                    pista[I][J - 1] = pista[I][J]
                    pista[I][J] = '.'
                    J -= 1
            elif pista[I][J] == 'L':
                if J != (M - 1)  and pista[I][J + 1] != '#':
                    anterior = pista[I][J + 1]
                    pista[I][J + 1] = pista[I][J]
                    pista[I][J] = '.'
                    J += 1
            if anterior == '*':
                figurinhas += 1

    print(figurinhas)

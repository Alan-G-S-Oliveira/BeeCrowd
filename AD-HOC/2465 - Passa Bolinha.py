from sys import stdin

def main():
    N = int(stdin.readline())

    I, J = map(int, stdin.readline().split())
    matrizAlunos = []
    matrizBandeira = [[False for _ in range(N)] for _ in range(N)]

    for _ in range(N):
        matrizAlunos.append(list(map(int, stdin.readline().split())))
    
    xAtual = I - 1
    yAtual = J - 1

    pilha = []
    levantadas = 1
    matrizBandeira[xAtual][yAtual] = True
    while True:
        atual = matrizAlunos[xAtual][yAtual]


        if yAtual + 1 < N:
            yMaior = matrizAlunos[xAtual][yAtual + 1]
            yMaiorB = matrizBandeira[xAtual][yAtual + 1]
        else:
            yMaior = -1
            yMaiorB = True
        if xAtual + 1 < N:
            xMaior = matrizAlunos[xAtual + 1][yAtual]
            xMaiorB = matrizBandeira[xAtual + 1][yAtual]
        else:
            xMaior = -1
            xMaiorB = True
        if yAtual - 1 >= 0:
            yMenor = matrizAlunos[xAtual][yAtual - 1]
            yMenorB = matrizBandeira[xAtual][yAtual - 1]
        else:
            yMenor = -1
            yMenorB = True
        if xAtual - 1 >= 0:
            xMenor = matrizAlunos[xAtual - 1][yAtual]
            xMenorB = matrizBandeira[xAtual - 1][yAtual]
        else:
            xMenor = -1
            xMenorB = True

        if yMaior >= atual and not(yMaiorB):
            pilha.append((xAtual, yAtual))
            matrizBandeira[xAtual][yAtual + 1] = True
            levantadas += 1
            yAtual += 1
        elif xMaior >= atual and not(xMaiorB):
            pilha.append((xAtual, yAtual))
            matrizBandeira[xAtual + 1][yAtual] = True
            levantadas += 1
            xAtual += 1
        elif yMenor >= atual and not(yMenorB):
            pilha.append((xAtual, yAtual))
            matrizBandeira[xAtual][yAtual - 1] = True
            levantadas += 1
            yAtual -= 1
        elif xMenor >= atual and not(xMenorB):
            pilha.append((xAtual, yAtual))
            matrizBandeira[xAtual - 1][yAtual] = True
            levantadas += 1
            xAtual -= 1
        elif len(pilha) > 0:
            xAtual, yAtual = pilha.pop()
        else:
            break

    print(levantadas)

if __name__ == '__main__':
    main()

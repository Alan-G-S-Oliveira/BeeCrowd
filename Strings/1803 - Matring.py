def main():
    matriz = []
    for _ in range(4):
        matriz.append(input())

    F = int(''.join(matriz[i][0] for i in range(4)))
    L = int(''.join(matriz[i][-1] for i in range(4)))

    N = len(matriz[0])
    saida = ''
    for j in range(1, N - 1):
        M = int(''.join(matriz[i][j] for i in range(4)))
        saida += chr((F * M + L) % 257)
    print(saida)

if __name__ == '__main__':
    main()

def posicoes(palavra: str) -> list:
    saida = []
    for i in range(len(palavra)):
        if palavra[i] == '_':
            saida.append(i)
            if len(saida) == 2:
                break
    return saida

def main():
    N = int(input())
    for _ in range(N):
        palpite1 = input()
        palpite2 = input()
        palavra = input()

        aux = posicoes(palavra)
        if palpite1[aux[0]] == palpite2[aux[1]] or palpite1[aux[1]] == palpite2[aux[0]]:
            print('Y')
        else:
            print('N')

if __name__ == '__main__':
    main()

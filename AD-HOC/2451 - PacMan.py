def main():
    N = int(input())
    tabuleiro = ''
    for i in range(N):
        aux = input()
        if i % 2 == 0:
            tabuleiro += aux
        else:
            tabuleiro += aux[::-1]
    tabuleiro = tabuleiro.replace('.', '')
    tabuleiro = tabuleiro.replace('A', ' ')
    tabuleiro = tabuleiro.split()
    print(len(max(tabuleiro, key= lambda x: len(x))))

if __name__ == '__main__':
    main()

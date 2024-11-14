def main():
    n = int(input())
    mensagem = input().split()
    saida = ''.join(chr(int(i, 16)) for i in mensagem)
    print(saida)

if __name__ == '__main__':
    main()

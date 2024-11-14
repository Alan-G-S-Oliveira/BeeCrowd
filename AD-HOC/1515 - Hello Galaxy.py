def main():
    while True:
        N = int(input())
        if N == 0:
            break

        for i in range(N):
            mensagem = input().split()
            if i == 0:
                menor = mensagem
            else:
                if int(mensagem[1]) - int(mensagem[2]) < int(menor[1]) - int(menor[2]):
                    menor = mensagem
        print(menor[0])

if __name__ == '__main__':
    main()

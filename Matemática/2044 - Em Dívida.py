from sys import stdin

def main():
    while True:
        N = int(stdin.readline())
        if N == -1:
            break

        V =  list(map(int, stdin.readline().split()))

        cobrancas = 0
        soma = 0
        for i in V:
            soma += i
            if soma % 100 == 0:
                soma = 0
                cobrancas += 1
        print(cobrancas)

if __name__ == '__main__':
    main()

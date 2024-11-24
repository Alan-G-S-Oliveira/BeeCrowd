from math import factorial

def main() -> None:
    while True:
        N = input()
        if N == '0':
            break

        X = len(N)
        saida = 0
        for i in range(X):
            saida += int(N[i]) * factorial(X - i)
        print(saida)

if __name__ == '__main__':
    main()

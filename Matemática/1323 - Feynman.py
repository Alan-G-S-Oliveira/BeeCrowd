def main():
    while True:
        N = int(input())
        if N == 0:
            break

        saida = N * (N + 1) * (2 * N + 1) / 6
        print(int(saida))

if __name__ == '__main__':
    main()

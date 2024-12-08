import sys

def main():
    while True:
        N = int(sys.stdin.readline())
        if N == 0:
            break

        T = list(map(int, sys.stdin.readline().split()))
        if N == 1:
            print(10)
        else:
            saida = 10
            for i in range(1, N):
                aux = T[i] - T[i - 1]
                if aux >= 10:
                    saida += 10
                else:
                    saida += aux
            print(saida)

if __name__ == '__main__':
    main()

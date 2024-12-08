def fatorial(N: int, K: int) -> int:
    saida = 1
    i = 0
    while True:
        aux = N - K * i
        if aux <= 0:
            return saida
        saida *= aux
        i += 1

def main():
    N = int(input())
    for _ in range(N):
        X = input()
        aux = X.replace('!', '')
        print(fatorial(int(aux), len(X) - len(aux)))

if __name__ == '__main__':
    main()

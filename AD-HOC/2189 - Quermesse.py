def main():
    cont = 1
    while True:
        N = int(input())
        if N == 0:
            break
        T = list(map(int, input().split()))
        for i in range(N):
            if T[i] == i + 1:
                print(f'Teste {cont}')
                print(i + 1)
                print()
                break
        cont += 1

if __name__ == '__main__':
    main()

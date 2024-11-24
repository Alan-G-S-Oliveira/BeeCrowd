def main():
    N = int(input())
    for _ in range(N):
        A, B = input().split()

        if A.endswith(B):
            print('encaixa')
        else:
            print('nao encaixa')

if __name__ == '__main__':
    main()

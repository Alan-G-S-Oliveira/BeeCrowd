def main():
    T = int(input())
    for i in range(T):
        N, X = input().split(maxsplit=1)
        Y = list(map(int, X.split()))
        N = int(N)
        print(f'Case {i + 1}: {Y[N // 2]}')

if __name__ == '__main__':
    main()

def main() -> None:
    N = int(input())
    for _ in range(N):
        X = input().split('+')
        if X == ['P=NP']:
            print('skipped')
        else:
            print(int(X[0]) + int(X[1]))

if __name__ == '__main__':
    main()

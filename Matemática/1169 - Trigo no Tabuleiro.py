def main():
    N = int(input())
    for _ in range(N):
        X = int(input())
        S = 2 * (2 ** (X - 1) - 1) + 1
        print(f'{S // 12000} kg')

if __name__ == '__main__':
    main()

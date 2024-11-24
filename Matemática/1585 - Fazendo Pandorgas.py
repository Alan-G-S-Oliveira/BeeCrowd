def main():
    N = int(input())
    for _ in range(N):
        x, y = map(int, input().split())
        print(f'{x * y // 2} cm2')

if __name__ == '__main__':
    main()

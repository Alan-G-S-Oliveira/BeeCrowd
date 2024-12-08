from sys import stdin

def main():
    A, B, C = map(int, stdin.readline().split())
    print(min(A // 2, B // 3, C // 5))

if __name__ == '__main__':
    main()

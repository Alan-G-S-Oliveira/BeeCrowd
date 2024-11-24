from math import gcd

def main():
    N = int(input())

    for _ in range(N):
        M, N = map(int, input().split())
        print(gcd(M, N))

if __name__ == '__main__':
    main()

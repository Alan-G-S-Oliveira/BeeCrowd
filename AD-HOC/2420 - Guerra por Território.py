from sys import stdin

def main():
    N = int(stdin.readline())
    A = list(map(int, stdin.readline().split()))

    total = sum(A)
    atual = 0
    for i in range(N):
        atual += A[i]
        total -= A[i]
        if atual == total:
            print(i + 1)
            break

if __name__ == '__main__':
    main()

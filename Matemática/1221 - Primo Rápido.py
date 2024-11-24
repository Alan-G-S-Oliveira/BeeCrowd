from math import ceil

def primo(X: int) -> bool:
    for i in range(2, ceil(X ** 0.5)):
        if X % i == 0:
            return False
    return True

def main():
    N = int(input())
    for _ in range(N):
        X = int(input())
        print(('' if primo(X) else 'Not ') + 'Prime')

if __name__ == '__main__':
    main()
    
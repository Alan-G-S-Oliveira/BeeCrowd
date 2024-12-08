from sys import stdin

def eh_primo(n: int) -> bool:
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def main():
    n = int(stdin.readline())

    for _ in range(n):
        x = int(stdin.readline()) + 1
        if x % 7 == 0 and x % 2 != 0 and eh_primo(x + 2):
            print('Yes')
        else:
            print('No')

if __name__ == '__main__':
    main()

import sys

def main():
    N = int(sys.stdin.readline())
    for _ in range(N):
        X = sys.stdin.readline()
        if 'Q' in X and 'K' in X and 'J' in X and 'A' in X:
            print('Aaah muleke')
        else:
            print('Ooo raca viu')

if __name__ == '__main__':
    main()

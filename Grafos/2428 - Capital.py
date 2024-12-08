from sys import stdin

def main():
    N = list(map(int, stdin.readline().split()))
    N.sort()
    if (N[1] * N[2]) / N[0] == N[3]:
        print('S')
    else:
        print('N')

if __name__ == '__main__':
    main()

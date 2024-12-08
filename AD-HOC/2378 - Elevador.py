from sys import stdin

def main():
    N, C = map(int, stdin.readline().split())

    passageiros = 0
    for _ in range(N):
        S, E = map(int, stdin.readline().split())
        passageiros -= S
        passageiros += E
        if passageiros > C:
            print('S')
            break
    if passageiros <= C:
        print('N')

if __name__ == '__main__':
    main()

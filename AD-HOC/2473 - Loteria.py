from sys import stdin

def main():
    N = list(map(int, stdin.readline().split()))
    M = list(map(int, stdin.readline().split()))

    cont = 0
    for i in N:
        for j in M:
            if i == j:
                cont += 1
                break

    if cont == 3:
        print('terno')
    elif cont == 4:
        print('quadra')
    elif cont == 5:
        print('quina')
    elif cont == 6:
        print('sena')
    else:
        print('azar')

if __name__ == '__main__':
    main()

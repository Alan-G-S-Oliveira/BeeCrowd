def main():
    N = int(input())
    for i in range(N):
        X, Y = input().split()

        print(f'Case {i + 1}:')
        if Y == 'bin':
            aux = int(X, 2)
            print(f'{aux} dec')
            print(hex(aux)[2:] + ' hex')
        elif Y == 'dec':
            X = int(X)
            print(hex(X)[2:] + ' hex')
            print(bin(X)[2:] + ' bin')
        else:
            aux = int(X, 16)
            print(f'{aux} dec')
            print(bin(aux)[2:] + ' bin')
        print()

if __name__ == '__main__':
    main()

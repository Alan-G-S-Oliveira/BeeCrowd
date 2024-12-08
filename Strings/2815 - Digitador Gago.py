from sys import stdin

def main():
    S = stdin.readline().split()
    aux = len(S)
    for i in range(aux):
        if len(S[i]) > 2 and S[i][0:2] == S[i][2:4]:
            print(S[i][2:],end='')
        else:
            print(S[i],end='')
        if i != (aux - 1):
            print(end=' ')
        else:
            print()

if __name__ == '__main__':
    main()

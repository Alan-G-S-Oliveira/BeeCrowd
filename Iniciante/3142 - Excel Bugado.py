import sys

def main() -> None:
    while True:
        try:
            S = sys.stdin.readline()
            if S == '':
                break

            S = S.replace('\n', '')
            if len(S) > 3:
                print('Essa coluna nao existe Tobias!')
            elif len(S) == 1:
                print(ord(S) - 64)
            elif len(S) == 2:
                print((ord(S[0]) - 64) * 26 + (ord(S[1]) - 64))
            elif ord(S[0]) > 88:
                print('Essa coluna nao existe Tobias!')
            elif ord(S[0]) == 88 and ord(S[1]) > 70:
                print('Essa coluna nao existe Tobias!')
            elif ord(S[0]) == 88 and ord(S[1]) == 70 and ord(S[2]) > 68:
                print('Essa coluna nao existe Tobias!')
            else:
                print((ord(S[0]) - 64) * 676 + (ord(S[1]) - 64) * 26 + (ord(S[2]) - 64))
        except EOFError:
            break

if __name__ == '__main__':
    main()

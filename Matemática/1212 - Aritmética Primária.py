def main():
    while True:
        N, M = input().split()
        if N == M == '0':
            break

        N = N[::-1]
        M = M[::-1]

        levar_1 = 0
        carry = 0
        for i in range(min(len(M), len(N))):
            if int(M[i]) + int(N[i]) + levar_1 >= 10:
                levar_1 = 1
                carry += 1
            else:
                levar_1 = 0

        if len(M) != len(N):
            aux = max((M, N), key=lambda x: len(x))
            if int(aux[min(len(N), len(M))]) + levar_1 >= 10:
                carry += 1

        if carry == 0:
            print('No carry operation.')
        elif carry == 1:
            print('1 carry operation.')
        else:
            print(f'{carry} carry operations.')

if __name__ == '__main__':
    main()

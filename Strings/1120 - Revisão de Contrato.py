while True:
    D, N = input().split()
    if D == N == '0':
        break
    if D != '':
        print(int(N.replace(D, '')))

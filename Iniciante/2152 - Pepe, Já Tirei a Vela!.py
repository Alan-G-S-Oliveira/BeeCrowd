N = int(input())

for i in range(N):
    H, M, O = input().split()

    H = int(H)
    M = int(M)

    if H < 10:
        print('0',end='')
    print(f'{H}:',end='')
    if M < 10:
        print('0',end='')
    print(f'{M} - ',end='')

    if O == '1':
        print('A porta abriu!')
    else:
        print('A porta fechou!')
        
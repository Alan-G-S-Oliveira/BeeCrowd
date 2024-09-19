def qtd_tabuas(lado: int, total: int, tabuas: list) -> int:
    saida = cont = 0

    tabuas.sort()
    while tabuas != []:
        if tabuas[-1] > lado:
            tabuas.pop()
        elif tabuas[-1] == lado:
            tabuas.pop()
            saida += 1
            cont += 1

            if cont == total:
                return saida
        else:
            break
        
    i = 0
    j = len(tabuas) - 1
    while True:
        while True:
            if tabuas[i] + tabuas[j] == lado:
                saida += 2
                cont += 1

                if cont == total:
                    return saida
                
                break
            j -= 1
        if i == j:
            break
        i += 1

    return -1

while True:
    M, N = list(map(int, input().split()))

    if M == N == 0:
        break

    L = int(input())
    K = int(input())
    C = list(map(int, input().split()))

    if M // (L / 100) > K or N // (L / 100) > K:
        print('impossivel')
        continue

    X = qtd_tabuas(M, N, C.copy())
    Y = qtd_tabuas(N, M, C)

    if X == Y == -1:
        print('impossivel')
    elif X == -1:
        print(Y)
    elif Y == -1:
        print(X)
    else:
        print(min(X, Y))

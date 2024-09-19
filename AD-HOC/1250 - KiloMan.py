N = int(input())

for i in range(N):
    T = int(input())
    tiros = list(map(int, input().split()))
    pulos = input()

    atingido = 0
    for i in range(T):
        if (pulos[i] == 'J' and tiros[i] > 2) or (pulos[i] == 'S' and tiros[i] <= 2):
            atingido += 1
    print(atingido)

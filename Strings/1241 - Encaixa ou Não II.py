N = int(input())

for _ in range(N):
    A, B = input().split()
    igual = True
    for i in range(1, len(B) + 1):
        if A[-i] != B[-i]:
            igual = False
            break
    print('encaixa' if igual else 'nao encaixa')

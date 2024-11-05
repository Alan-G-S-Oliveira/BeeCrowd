N = int(input())
for _ in range(N):
    K = int(input())
    ingles = False
    for i in range(K):
        L = input()
        if i == 0:
            atual = L
        elif L != atual:
            ingles = True
    if ingles:
        print('ingles')
    else:
        print(L)

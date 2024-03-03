N = int(input())

for i in range(N):
    K = list(map(int, input().split()))
    K.pop(0)

    tomadas = 0
    for j in range(len(K) - 1):
        tomadas += K[j] - 1
    tomadas += K[-1]

    print(tomadas)

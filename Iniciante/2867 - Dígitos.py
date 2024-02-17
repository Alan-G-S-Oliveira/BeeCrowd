C = int(input())

for i in range(C):
    N, M = input().split()

    N = int(N)
    M = int(M)

    X = N ** M
    X = str(X)

    print(len(X))

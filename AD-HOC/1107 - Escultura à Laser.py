while True:
    A, C = list(map(int, input().split()))
    if A == C == 0:
        break

    X = list(map(int, input().split()))

    cortar = A - X[0]
    for i in range(1, C):
        if X[i] < X[i - 1]:
            cortar += (X[i - 1] - X[i])    

    print(cortar)

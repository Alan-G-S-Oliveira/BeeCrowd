while True:
    A, B = list(map(int, input().split()))
    if A == B == 0:
        break

    X = set(list(map(int, input().split())))
    Y = set(list(map(int, input().split())))

    troca1 = set()
    troca2 = set()

    for i in X:
        if not(i in Y) and not(i in troca1):
            troca1.add(i)
    
    for i in Y:
        if not(i in X) and not(i in troca2):
            troca2.add(i)

    print(min(len(troca1), len(troca2)))

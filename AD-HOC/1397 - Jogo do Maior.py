while True:
    N = int(input())
    if N == 0:
        break
    Pa = Pb = 0
    for _ in range(N):
        A, B = map(int, input().split())
        if A > B:
            Pa += 1
        elif A < B:
            Pb += 1
    print(Pa, Pb)

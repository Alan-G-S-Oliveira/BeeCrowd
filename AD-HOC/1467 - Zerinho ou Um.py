while True:
    try:
        A, B, C = input().split()
        if A == B == C:
            print('*')
        elif A == B and A != C:
            print('C')
        elif A == C and A != B:
            print('B')
        else:
            print('A')
    except EOFError:
        break

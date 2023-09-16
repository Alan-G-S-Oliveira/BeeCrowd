while True:
    try:
        N = int(input())
        V = input().split()
        Sim = 0

        for i in V:
            if i == '1':
                Sim += 1

        if Sim >= N * (2 / 3):
            print('impeachment')
        else:
            print('acusacao arquivada')
    except EOFError:
        break

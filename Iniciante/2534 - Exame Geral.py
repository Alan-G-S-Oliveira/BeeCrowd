while True:
    try:   
        N, Q = input().split()
        N = int(N)
        Q = int(Q)
        notas = []

        for i in range(N):
            notas.append(int(input()))
        notas.sort()

        for i in range(Q):
            X = int(input())
            
            print(notas[len(notas) - X])
    except EOFError:
        break

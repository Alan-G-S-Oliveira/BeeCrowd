while True:
    N, D = list(map(int, input().split()))
    if N == 0:
        break

    alunos = [0] * N
    for i in range(D):
        X = list(map(int, input().split()))
        alunos = list(map(lambda x, y: x + y, alunos, X))

    if D in alunos:
        print('yes')
    else:
        print('no')

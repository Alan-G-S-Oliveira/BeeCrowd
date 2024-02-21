N = int(input())

for i in range(N):

    joao = maria = 0

    for j in range(3):
        X, D = list(map(int, input().split()))
        joao += X * D
    for j in range(3):
        X, D = list(map(int, input().split()))
        maria += X * D

    if joao > maria:
        print('JOAO')
    else:
        print('MARIA')
        
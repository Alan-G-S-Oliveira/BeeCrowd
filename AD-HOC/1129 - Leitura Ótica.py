while True:
    N = int(input())
    if N == 0:
        break

    for i in range(N):
        respostas = list(map(int, input().split()))
        marcadas = 0
        for j in range(len(respostas)):
            if respostas[j] <= 127:
                marcadas += 1
                posicao = j
        if marcadas == 1:
            print(chr(ord('A') + posicao))
        else:
            print('*')

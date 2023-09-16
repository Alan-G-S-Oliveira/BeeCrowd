while True:
    try:
        string = input()
        N = int(input())
        L = input().split()
        mensagem = ''

        for i in range(N):
            mensagem += string[int(L[i]) - 1]

        print(mensagem)
    except EOFError:
        break

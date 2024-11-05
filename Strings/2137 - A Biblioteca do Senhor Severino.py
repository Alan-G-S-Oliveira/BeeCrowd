while True:
    try:
        N = int(input())
        livros = []
        for _ in range(N):
            livros.append(int(input()))
        livros.sort()
        for i in livros:
            print((4 - len(str(i))) * '0' + str(i))
    except EOFError:
        break

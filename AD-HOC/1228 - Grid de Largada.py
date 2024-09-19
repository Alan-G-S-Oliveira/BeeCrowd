while True:
    try:
        N = int(input())
        largada = list(map(int, input().split()))
        chegada = list(map(int, input().split()))

        ultrapassagens = 0
        for i in range(N):
            x = largada.index(chegada[i])
            if x != i:
                ultrapassagens += abs(x - i)
                y = largada.pop(x)
                largada.insert(i, y)
        
        print(ultrapassagens)

    except EOFError:
        break

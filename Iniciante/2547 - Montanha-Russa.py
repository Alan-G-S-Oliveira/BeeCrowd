while True:
    try:
        N, A_min, A_max = input().split()
        N = int(N)
        A_min = int(A_min)
        A_max = int(A_max)
        soma = 0

        for i in range(N):
            A = int(input())
            if A_min <= A <= A_max:
                soma += 1
        print(soma)
    except EOFError:
        break

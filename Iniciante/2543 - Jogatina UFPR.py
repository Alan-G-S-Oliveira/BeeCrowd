while True:
    try:
        N, I = input().split()
        N = int(N)
        I = int(I)
        soma = 0

        for i in range(N):
            J, K = input().split()
            J = int(J)
            K = int(K)
            if J == I and K == 0:
                soma += 1
        
        print(soma)
    except EOFError:
        break

while True:
    try:
        N = int(input())

        maior = -1
        for i in range(N):
            T, D = input().split()
            T = float(T)
            D = float(D)
            velocidade = (D * 60) / T 

            if velocidade > maior:
                maior = velocidade
                print(i + 1)
            
    except EOFError:
        break

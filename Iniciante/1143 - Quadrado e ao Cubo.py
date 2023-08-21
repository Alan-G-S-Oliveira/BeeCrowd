N = int(input())

if 1 <= N <= 1000:
    for i in range(1, N + 1):
        quadrado = pow(i, 2)
        cubo = pow(i, 3)
        
        print(f"{i} {quadrado} {cubo}")
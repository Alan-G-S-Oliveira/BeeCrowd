while True:
    M, N = input().split()
    
    M = int(M)
    N = int(N)
    soma = 0
    
    if M <= 0 or N <= 0:
        break
    
    if M > N:
        aux = M
        M = N
        N = aux
        
    while M <= N:
        print(f"{M} ", end='')
        soma += M
        M += 1
    print(f"Sum={soma}")
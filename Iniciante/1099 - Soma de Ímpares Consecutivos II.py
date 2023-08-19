N = int(input())

for i in range(0, N):
    X, Y = input().split()
    
    X = int(X)
    Y = int(Y)
    soma = 0
    
    if X > Y:
        aux = X
        X = Y
        Y = aux
    
    X += 1
    
    while X < Y:
        if X % 2 != 0:
            soma += X
        X += 1
            
    print(soma)
     
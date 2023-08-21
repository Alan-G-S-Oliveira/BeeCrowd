while True:
    X = int(input())
    soma = 0
    i = 1
    
    if X == 0:
        break
        
    while i <= 5:
        if X % 2 == 0:
            soma += X
            i += 1
        X += 1
    print(soma)
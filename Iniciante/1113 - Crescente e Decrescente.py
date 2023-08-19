while True:
    X, Y = input().split()
    
    if X == Y:
        break
        
    X = int(X)
    Y = int(Y)
    
    if X > Y:
        print("Decrescente")
    else:
        print("Crescente")
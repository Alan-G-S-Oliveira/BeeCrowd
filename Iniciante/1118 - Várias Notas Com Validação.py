i = True

while i:
    while True:
        n1 = float(input())
        
        if 0 <= n1 <= 10:
            break
        print("nota invalida")
    
    while True:
        n2 = float(input())
        
        if 0 <= n2 <= 10:
            break
        print("nota invalida")
    
    media = (n1 + n2) / 2
    print(f"media = {media:.2f}")
    
    while True:
        print("novo calculo (1-sim 2-nao)")
        X = int(input())
        
        if X == 1:
            break
        elif X == 2:
            i = False
            break
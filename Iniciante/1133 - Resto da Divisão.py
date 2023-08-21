X = int(input())
Y = int(input())

if X > Y:
    aux = X
    X = Y
    Y = aux
    
X += 1
while X < Y:
    if X % 5 == 2 or X % 5 == 3:
        print(X)
    X += 1
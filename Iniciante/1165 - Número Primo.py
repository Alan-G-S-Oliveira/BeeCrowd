N = int(input())

for i in range(0, N):
    X = int(input())

    divisor = 0

    for i in range(2, X):
        if X % i == 0:
            divisor = 1
            break
    if X <= 1 or divisor != 0:
        print(f'{X} nao eh primo')    
    else:
        print(f'{X} eh primo')
while True:
    try:
        N = int(input())
    except EOFError:
        break

    lesma = input().split()

    for i in range(len(lesma)):
        lesma[i] = int(lesma[i])
    
    maior = lesma[0]
    for i in range(1 ,len(lesma)):
        if lesma[i] > maior:
            maior = lesma[i]

    if maior < 10:
        print(1)
    elif 10 <= maior < 20:
        print(2)
    else:
        print(3)
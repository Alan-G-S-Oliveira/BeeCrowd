while True:
    try:

        T = int(input())

        for i in range(T):
            N = float(input())
            if i == 0:
                menor = N
            elif N < menor:
                menor = N

        print(f'{menor:.2f}')

    except EOFError:
        break

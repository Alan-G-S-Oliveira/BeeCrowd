while True:
    try:

        N = int(input())

        seculo = N // 100
        if N % 100 != 0:
            seculo += 1

        print(seculo)

    except EOFError:
        break

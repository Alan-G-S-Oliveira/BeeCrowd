while True:
    try:
        A = int(input())

        print('Y' if (A % 6 == 0) else 'N')

    except EOFError:
        break
    
while True:
    try:
        V = float(input())
        D = float(input())
    except EOFError:
        break

    area = 3.14 * (D / 2)**2
    altura = V / area

    print(f'ALTURA = {altura:.2f}')
    print(f'AREA = {area:.2f}')
    
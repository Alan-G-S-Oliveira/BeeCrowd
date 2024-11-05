import math

while True:
    try:
        num = float(input())
        cutoff = float(input())

        if num - int(num) > cutoff:
            print(math.ceil(num))
        else:
            print(math.floor(num))

    except EOFError:
        break

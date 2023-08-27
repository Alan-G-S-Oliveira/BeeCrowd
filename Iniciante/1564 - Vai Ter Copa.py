while True:
    try:
        N = int(input())
    except EOFError:
        break

    if N == 0:
        print("vai ter copa!")
    else:
        print("vai ter duas!")
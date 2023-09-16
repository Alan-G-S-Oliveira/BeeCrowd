from math import log2

while True:
    try:
        N = int(input())
        print(int(log2(N)))
    except EOFError:
        break

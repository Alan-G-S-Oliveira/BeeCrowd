H, E, A, O, W, X = list(map(int, input().split()))

if H + E + A + X >= O + W:
    print('Middle-earth is safe.')
else:
    print('Sauron has returned.')

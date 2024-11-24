from math import ceil
X, Y = map(int, input().split())
print(ceil(Y / (Y - X)))

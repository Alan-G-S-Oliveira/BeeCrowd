X = list(map(int, input().split()))
Y = list(map(int, input().split()))

aux = list(map(lambda x: 0 if x == 1 else 1, X))
print('Y' if aux == Y else 'N')

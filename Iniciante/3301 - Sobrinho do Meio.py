H, Z, L = map(int, input().split())

if H > Z > L or L > Z > H:
    print('zezinho')
elif Z > H > L or L > H > Z:
    print('huguinho')
else:
    print('luisinho')

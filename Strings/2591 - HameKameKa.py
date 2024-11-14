C = int(input())
for _ in range(C):
    K = input()
    K = K[1:]
    K = K[:len(K) - 2]
    K = K.replace('mek', ' ')
    aux = K.split()
    print('k' + 'a' * len(aux[0]) * len(aux[1]))

T = int(input())

for i in range(T):
    tipo = input()
    R, G, B = input().split()
    R = int(R)
    G = int(G)
    B = int(B)

    if tipo == 'eye':
        P = int(0.3 * R + 0.59 * G + 0.11 * B)
    elif tipo == 'mean':
        P = int((R + G + B) / 3)
    elif tipo == 'max':
        P = max(R, G, B)
    else:
        P = min(R, G, B)

    print(f'Caso #{i + 1}: {P}')
    
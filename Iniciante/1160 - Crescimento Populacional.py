import math

T = int(input())

for i in range(0, T):
    PA, PB, G1, G2 = input().split()

    PA = int(PA)
    PB = int(PB)
    G1 = float(G1)
    G2 = float(G2)
    tempo = 0

    while PA <= PB:
        PA += math.floor((PA * G1) / 100)
        PB += math.floor((PB * G2) / 100)
        tempo += 1
        
        if tempo > 100:
            break
    if tempo <= 100:
        print(f'{tempo} anos.')
    else:
        print('Mais de 1 seculo.')
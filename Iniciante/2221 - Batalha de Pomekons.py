T = int(input())

ataque = []
for i in range(T):
    B = int(input())

    for j in range(2):
        Ai, Di, Li = input().split()

        Ai = int(Ai)
        Di = int(Di)
        Li = int(Li)

        golpe = (Ai + Di) / 2
        if Li % 2 == 0:
            ataque.append(golpe + B)
        else:
            ataque.append(golpe)

    if ataque[0] > ataque[1]:
        print('Dabriel')
    elif ataque[0] == ataque[1]:
        print('Empate')
    else:
        print('Guarte')
        
    ataque.clear()

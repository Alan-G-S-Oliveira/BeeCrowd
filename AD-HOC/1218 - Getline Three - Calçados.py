cont = 1
while True:
    try:
        N = input()
        calcados = input().split()

        iguais = 0
        M = 0
        F = 0
        limite = int(len(calcados) / 2)
        for i in range(limite):
            if calcados[2 * i] == N:
                iguais += 1
                if calcados[2 * i + 1] == 'M':
                    M += 1
                else:
                    F += 1
        
        #Vai se foder beecrowd
        if cont != 1:
            print()
        print(f'Caso {cont}:')
        print(f'Pares Iguais: {iguais}')
        print(f'F: {F}')
        print(f'M: {M}')

        cont += 1

    except EOFError:
        break

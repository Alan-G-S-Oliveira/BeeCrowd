while True:
    try:
        T = int(input())

        matriz = []
        eliminados = []

        for i in range(T):
            formula = input()
            formula = formula.replace('=', ' ')
            partes = formula.split()
            for i in range(3):
                partes[i] = int(partes[i])
            matriz.append(partes)
        
        for i in range(T):
            palpite = input().split()

            if matriz[int(palpite[1]) - 1][0] + matriz[int(palpite[1]) - 1][1] == matriz[int(palpite[1]) - 1][2]:
                if palpite[2] != '+':
                    eliminados.append(palpite[0])
            elif matriz[int(palpite[1]) - 1][0] - matriz[int(palpite[1]) - 1][1] == matriz[int(palpite[1]) - 1][2]:
                if palpite[2] != '-':
                    eliminados.append(palpite[0])
            elif matriz[int(palpite[1]) - 1][0] * matriz[int(palpite[1]) - 1][1] == matriz[int(palpite[1]) - 1][2]:
                if palpite[2] != '*':
                    eliminados.append(palpite[0])
            else:
                if palpite[2] != 'I':
                    eliminados.append(palpite[0])
        
        if len(eliminados) == 0:
            print('You Shall All Pass!')
        elif len(eliminados) == T:
            print('None Shall Pass!')
        else:
            for i in range(1, len(eliminados) + 1):
                if i != len(eliminados):
                    print(f'{eliminados[len(eliminados) - i]}',end=' ')
                else:
                    print(f'{eliminados[len(eliminados) - i]}')

    except:
        break

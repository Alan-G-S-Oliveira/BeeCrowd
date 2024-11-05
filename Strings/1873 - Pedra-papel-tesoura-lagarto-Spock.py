while True:
    try:
        N = int(input())
        for _ in range(N):
            rajesh, sheldon = input()
            if rajesh == sheldon:
                print('empate')
            else:
                if rajesh == 'spock':
                    if sheldon == 'tesoura' or sheldon == 'pedra':
                        print('rajesh')
                    else:
                        print('sheldon')
                elif rajesh == 'pedra':
                    if sheldon == 'lagarto' or sheldon == 'tesoura':
                        print('rajesh')
                    else:
                        print('sheldon')
                elif rajesh == 'papel':
                    if sheldon == 'pedra' or sheldon == 'spock':
                        print('rajesh')
                    else:
                        print('sheldon')
                elif rajesh == 'lagarto':
                    if sheldon == 'spock' or sheldon == 'papel':
                        print('rajesh')
                    else:
                        print('sheldon')
                else:
                    if sheldon == 'papel' or sheldon == 'lagarto':
                        print('rajesh')
                    else:
                        print('sheldon')
    except EOFError:
        break
                        
N = int(input())

for i in range(1, N + 1):
    sheldon, raj = input().split()
    if sheldon == 'pedra' and (raj == 'tesoura' or raj == 'lagarto'):
        print(f'Caso #{i}: Bazinga!')
    elif sheldon == 'tesoura' and (raj == 'papel' or raj == 'lagarto'):
        print(f'Caso #{i}: Bazinga!')
    elif sheldon == 'papel' and (raj == 'pedra' or raj == 'Spock'):
        print(f'Caso #{i}: Bazinga!')
    elif sheldon == 'Spock' and (raj == 'tesoura' or raj == 'pedra'): 
        print(f'Caso #{i}: Bazinga!')
    elif sheldon == 'lagarto' and (raj == 'Spock' or raj == 'papel'):
        print(f'Caso #{i}: Bazinga!')
    elif raj == 'pedra' and (sheldon == 'tesoura' or sheldon == 'lagarto'):
        print(f'Caso #{i}: Raj trapaceou!')
    elif raj == 'tesoura' and (sheldon == 'papel' or sheldon == 'lagarto'):
        print(f'Caso #{i}: Raj trapaceou!')
    elif raj == 'papel' and (sheldon == 'pedra' or sheldon == 'Spock'):  
        print(f'Caso #{i}: Raj trapaceou!')
    elif raj == 'Spock' and (sheldon == 'tesoura' or sheldon == 'pedra'): 
        print(f'Caso #{i}: Raj trapaceou!')
    elif raj == 'lagarto' and (sheldon == 'Spock' or sheldon== 'papel'):
        print(f'Caso #{i}: Raj trapaceou!')
    elif raj == sheldon:
        print(f'Caso #{i}: De novo!')
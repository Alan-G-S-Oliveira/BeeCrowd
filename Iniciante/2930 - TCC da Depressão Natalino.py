E, D = list(map(int, input().split()))

if D - E < 0:
    print('Eu odeio a professora!')
elif D - E < 3:
    print('Parece o trabalho do meu filho!')
    if E + 2 < 24:
        print('TCC Apresentado!')
    else:
        print('Fail! Entao eh nataaaaal!')
else:
    print('Muito bem! Apresenta antes do Natal!')

N = input()
N1 = float(N)

if N1 > 0:
    print(f'+{N1:.4E}')
elif N1 == 0:
    if N[0] == '-':
        print(f'{N1:.4E}')
    else:
        print(f'+{N1:.4E}')
else:
    print(f'{N1:.4E}')
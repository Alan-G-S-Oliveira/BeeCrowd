B = int(input())
G = int(input())

Bolinhas = int(G / 2) - B

if Bolinhas <= 0:
    print('Amelia tem todas bolinhas!')
else:
    print(f'Faltam {Bolinhas} bolinha(s)')

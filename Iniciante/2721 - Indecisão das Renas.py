dicionario = {

    0 : 'Dasher',
    1 : 'Dancer',
    2 : 'Prancer',
    3 : 'Vixen',
    4 : 'Comet',
    5 : 'Cupid',
    6 : 'Donner',
    7 : 'Blitzen',
    8 : 'Rudolph'

}

A = input().split()
soma = 0

for i in A:
    soma += int(i)

rena = (soma - 1) % 9

print(dicionario[rena])

N = int(input())

Hobbit = Humano = Elfo = Anao = Mago = 0

for i in range(N):
    raca = input().split()

    if raca[1] == 'A':
        Anao += 1
    elif raca[1] == 'E':
        Elfo += 1
    elif raca[1] == 'H':
        Humano += 1
    elif raca[1] == 'M':
        Mago += 1
    else:
        Hobbit += 1

print(f'{Hobbit} Hobbit(s)')
print(f'{Humano} Humano(s)')
print(f'{Elfo} Elfo(s)')
print(f'{Anao} Anao(oes)')
print(f'{Mago} Mago(s)')

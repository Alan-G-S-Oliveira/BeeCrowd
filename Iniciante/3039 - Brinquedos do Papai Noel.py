N = int(input())

meninos = meninas = 0

for i in range(N):
    nome, genero = input().split()

    if genero == 'F':
        meninas += 1
    else:
        meninos += 1

print(f'{meninos} carrinhos')
print(f'{meninas} bonecas')

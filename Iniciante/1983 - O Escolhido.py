N = int(input())

for i in range(N):
    matricula, nota = input().split()
    nota = float(nota)

    if i == 0:
        maior = nota
        matricula_maior = matricula
    else:
        if nota > maior:
            maior = nota
            matricula_maior = matricula

if maior >= 8:
    print(matricula_maior)
else:
    print('Minimum note not reached')
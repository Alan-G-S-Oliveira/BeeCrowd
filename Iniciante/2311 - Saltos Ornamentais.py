N = int(input())

for i in range(N):
    nome = input()
    GD = float(input())

    nota = input().split()
    for j in range(7):
        nota[j] = float(nota[j])

    maior = nota[0]
    posicaoMaior = 0

    for j in range(1, 7):
        if nota[j] > maior:
            maior = nota[j]
            posicaoMaior = j
    nota.pop(posicaoMaior)

    menor = nota[0]
    posicaoMenor = 0
    
    for j in range(1, 6):
        if nota[j] < menor:
            menor = nota[j]
            posicaoMenor = j
    nota.pop(posicaoMenor)

    soma = 0
    for j in nota:
        soma += j

    soma *= GD
    
    print(f'{nome} {soma:.2f}')

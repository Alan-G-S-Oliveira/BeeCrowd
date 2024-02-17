N = int(input())

qtdVitorias = 0

for i in range(N):
    palpite = int(input())

    if palpite == 3 or palpite == 2:
        qtdVitorias += 1

print(qtdVitorias)

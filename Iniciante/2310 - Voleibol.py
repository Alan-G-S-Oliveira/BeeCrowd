N = int(input())

saque = 0
bloqueio = 0
ataque = 0
saqueTotal = 0
bloqueioTotal = 0
ataqueTotal = 0

for i in range(N):
    nome = input()

    S, B, A = input().split()
    S1, B1, A1 = input().split()

    saque += int(S1)
    bloqueio += int(B1)
    ataque += int(A1)
    saqueTotal += int(S)
    bloqueioTotal += int(B)
    ataqueTotal += int(A)

saquePct = (saque / saqueTotal) * 100
bloqueioPct = (bloqueio / bloqueioTotal) * 100
ataquePct =  (ataque / ataqueTotal) * 100

print(f'Pontos de Saque: {saquePct:.2f} %.')
print(f'Pontos de Bloqueio: {bloqueioPct:.2f} %.')
print(f'Pontos de Ataque: {ataquePct:.2f} %.')

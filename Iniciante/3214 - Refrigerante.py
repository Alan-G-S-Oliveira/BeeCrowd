E, F, C = list(map(int, input().split()))

garrafasAtual = E + F
total = 0

while garrafasAtual >= C:
    aux = garrafasAtual // C
    total += aux
    garrafasAtual %= C
    garrafasAtual += aux

print(total)

S, T, F = input().split()
S = int(S)
T = int(T)
F = int(F)

horario = S + T + F
if horario >= 24:
    horario -= 24
if horario < 0:
    horario = 24 + horario

print(horario)

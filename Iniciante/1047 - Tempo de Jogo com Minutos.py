H1, M1, H2, M2 = input().split()

H1 = int(H1)
M1 = int(M1)
H2 = int(H2)
M2 = int(M2)

if M1 > M2:
    H1 = H1 + 1
    minutos = (60 + M2) - M1
else:
    minutos = M2 - M1
  
if H1 > H2: 
    horas = (H2 + 24) - H1
else:
    horas = H2 - H1

if H1 == H2 and M1 == M2:
    horas = 24
    minutos = 0

print(f'O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)')
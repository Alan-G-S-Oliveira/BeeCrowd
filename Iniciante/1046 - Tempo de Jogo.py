inicio, fim = input().split()

inicio = int(inicio)
fim = int(fim)

if inicio >= fim:
    horas = 24 - inicio + fim
else:
    horas = fim - inicio
    
print(f'O JOGO DUROU {horas} HORA(S)')
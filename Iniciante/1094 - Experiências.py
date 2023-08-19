N = int(input())
total = 0
C = 0
R = 0
S = 0

for i in range(0, N):
    
    quantia, Tipo = input().split()
    
    quantia = int(quantia)
    
    total += quantia
        
    if Tipo == 'C':
        C += quantia
    elif Tipo == 'R':
        R += quantia
    else:
        S += quantia

print(f"Total: {total} cobaias")
print(f"Total de coelhos: {C}")
print(f"Total de ratos: {R}")
print(f"Total de sapos: {S}")

Percentual_C = (C / total) * 100
Percentual_R = (R / total) * 100
Percentual_S = (S / total) * 100

print(f"Percentual de coelhos: {Percentual_C:.2f} %")
print(f"Percentual de ratos: {Percentual_R:.2f} %")
print(f"Percentual de sapos: {Percentual_S:.2f} %")
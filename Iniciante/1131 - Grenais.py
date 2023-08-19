i = True
grenais = 0
vitoria_inter = 0
vitoria_gremio = 0
empate = 0

while i:
    inter, gremio = input().split()
    
    gremio = int(gremio)
    inter = int(inter)
    
    if gremio > inter:
        vitoria_gremio += 1
    elif gremio < inter:
        vitoria_inter += 1
    else:
        empate += 1
    
    grenais += 1
    
    while True:
        print("Novo grenal (1-sim 2-nao)")
        X = int(input())
        
        if X == 2:
            i = False
            break
        elif X == 1:
            break

print(f"{grenais} grenais")
print(f"Inter:{vitoria_inter}")
print(f"Gremio:{vitoria_gremio}")
print(f"Empates:{empate}")

if vitoria_inter > vitoria_gremio:
    print("Inter venceu mais")
elif vitoria_inter < vitoria_gremio:
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")
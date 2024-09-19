distancias = 0.0
contador = 0
while True:
    try:
        input()
        distancias += float(input())
        contador += 1
    except Exception:
        break

print(f'{(distancias / contador):.1f}')

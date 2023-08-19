while True:
    n1 = float(input())
    
    if 0 <= n1 <= 10:
        break
    
    print("nota invalida")

while True:
    n2 = float(input())
    
    if 0 <= n2 <= 10:
        break
    
    print("nota invalida")

media = (n1 + n2) / 2

print(f"media = {media:.2f}")
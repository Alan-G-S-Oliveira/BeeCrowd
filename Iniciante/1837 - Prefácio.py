a, b = input().split()
a = int(a)
b = int(b)

for i in range(abs(b)):
    quociente = (a - i) / b
    if quociente == int(quociente):
        quociente = int(quociente)
        resto = i
        break
print(f'{quociente} {resto}')
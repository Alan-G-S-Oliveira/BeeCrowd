N = int(input())
numero = []
string = ''
char = 'A'

while True:
    numero.append(N % 16)
    N //= 16
    if N < 16:
        break
numero.append(N)

for i in range(len(numero)):
    if numero[len(numero) - 1 - i] < 10:
        string += str(numero[len(numero) - 1 - i])
    else:
        string += chr(ord(char) + (numero[len(numero) - 1 - i] - 10))

for i in range(len(string)):
    if string[i] != '0':
        break

print(string[i:]) 
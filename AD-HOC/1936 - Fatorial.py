from math import factorial

N = int(input())
Y = 0

fatoriais = []
i = 1
while True:
    f = factorial(i)
    if f > N:
        break
    fatoriais.append(f)
    i += 1

for f in reversed(fatoriais):
    if f <= N:
        Y += N // f  
        N %= f  
        if N == 0:
            break

print(Y)

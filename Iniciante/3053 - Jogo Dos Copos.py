N = int(input())
A = input()

A = (ord(A) - ord('A'))

copos = [0] * 3
copos[A] = 1

for i in range(N):
    M = int(input())

    if M == 1:
        aux = copos[0]
        copos[0] = copos[1]
        copos[1] = aux
    elif M == 2:
        aux = copos[1]
        copos[1] = copos[2]
        copos[2] = aux
    else:
        aux = copos[0]
        copos[0] = copos[2]
        copos[2] = aux

for i in range(3):
    if copos[i] == 1:
        print(chr(i + ord('A')))
        break
     
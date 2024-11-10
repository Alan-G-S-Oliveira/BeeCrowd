N = input()
X = len(N)
azar = False
for i in range(X):
    if N[i] == '1':
        if i != X - 1 and N[i + 1] == '3':
            azar = True
            break
if azar:
    print(f'{N} es de Mala Suerte')
else:
    print(f'{N} NO es de Mala Suerte')

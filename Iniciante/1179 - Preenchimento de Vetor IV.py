par = []
impar = []

for i in range(0, 15):
    X = int(input())
    if X % 2 == 0:

        if len(par) == 5:
            for j in range(0, 5):
                print(f'par[{j}] = {par[j]}')
            par.clear()
        par.append(X)
    else:

        if len(impar) == 5:
            for j in range(0, 5):
                print(f'impar[{j}] = {impar[j]}')
            impar.clear()
        impar.append(X)

for i in range(0, len(impar)):
    print(f'impar[{i}] = {impar[i]}')

for i in range(0, len(par)):
    print(f'par[{i}] = {par[i]}')
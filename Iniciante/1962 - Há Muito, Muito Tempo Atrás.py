N = int(input())

for i in range(N):
    ano = int(input())
    ano = 2015 - ano

    if ano > 0:
        print(f'{ano} D.C.')
    else:
        print(f'{-(ano) + 1} A.C.')
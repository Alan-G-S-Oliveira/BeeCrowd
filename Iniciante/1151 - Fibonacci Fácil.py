N = int(input())
n1 = 0
n2 = 1

print(f'{n1} {n2}', end='')

for i in range(2, N):
    aux = n1 + n2
    n1 = n2 
    n2 = aux

    print(f' {n2}', end='')
print()
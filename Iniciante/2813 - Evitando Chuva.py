N = int(input())

C = E = 0
auxC = auxE = 0

for i in range(N):
    SD, SN = input().split()

    if SD == 'chuva':
        if auxC != 0:
            auxC -= 1
            auxE +=1
        else:
            C += 1
            auxE += 1
    if SN == 'chuva':
        if auxE != 0:
            auxE -= 1
            auxC += 1
        else:
            E += 1
            auxC += 1

print(f'{C} {E}')

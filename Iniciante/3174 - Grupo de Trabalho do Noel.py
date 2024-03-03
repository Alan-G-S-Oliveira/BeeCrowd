dicionario1 = {

    'bonecos': 8,
    'arquitetos': 4,
    'musicos': 6,
    'desenhistas': 12

}

dicionario2 = {

    'bonecos': 0,
    'arquitetos': 0,
    'musicos': 0,
    'desenhistas': 0

}

N = int(input())

for i in range(N):
    E, G, H =  input().split()
    H = int(H)

    dicionario2[G] += H

totalBrinquedos = 0
for i in dicionario2:
    totalBrinquedos += dicionario2[i] // dicionario1[i]

print(totalBrinquedos)

cartas = list(map(int, input().split()))

cresc = 0
decre = 0

for i in range(4):
    if cartas[i] < cartas[i + 1]:
        cresc += 1
    else:
        decre += 1

if cresc == 4:
    print('C')
elif decre == 4:
    print('D')
else:
    print('N')
    
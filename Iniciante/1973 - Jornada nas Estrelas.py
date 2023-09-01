from sys import stdin

N = int(stdin.readline())

carneiros = list(map(int, stdin.readline().split()))

aux = carneiros[:]

i = 0
estrela = 0

while True:

    if carneiros[i] % 2 != 0:
        carneiros[i] -= 1

        i += 1
    else:
        if carneiros[i] != 0:
            carneiros[i] -= 1

        i -= 1

    if i < 0 or i >= N:
        break

for i in range(N):
    if carneiros[i] != aux[i]:
        estrela += 1
    
print(estrela, sum(carneiros))

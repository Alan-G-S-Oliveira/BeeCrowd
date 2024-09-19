N = int(input())
dias = 0
valor = 0
quilos = 0

for i in range(N):
    V = float(input())
    frutas = input().split()

    print(f'day {i + 1}: {len(frutas)} kg')

    dias += 1
    valor += V
    quilos += len(frutas)

print(f'{(quilos / dias):.2f} kg by day')
print(f'R$ {(valor / dias):.2f} by day')

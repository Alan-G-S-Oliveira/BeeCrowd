N = int(input())
total = 0

for i in range(N):
    produto, qtd = input().split()

    qtd = int(qtd)

    if produto == '1001':
        total += qtd * 1.5
    elif produto == '1002':
        total += qtd * 2.5
    elif produto == '1003':
        total += qtd * 3.5
    elif produto == '1004':
        total += qtd * 4.5
    else:
        total += qtd * 5.5

print(f'{total:.2f}')
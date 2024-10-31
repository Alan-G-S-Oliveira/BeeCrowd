#1, 3, 5, 10, 25, 50 e 100
N = int(input())
saida = ''
if N == 1:
    saida = '1'
elif N <= 3:
    saida = '3'
elif N <= 5:
    saida = '5'
elif N <= 10:
    saida = '10'
elif N <= 25:
    saida = '25'
elif N <= 50:
    saida = '50'
else:
    saida = '100'

print('Top ' + saida)

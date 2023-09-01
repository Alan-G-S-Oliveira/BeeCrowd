N = int(input())
X = ''

if N - 900 >= 0:
    N -= 900
    X += 'CM'

if N - 500 >= 0:
    N -= 500
    X += 'D'

if N - 400 >= 0:
    N -= 400
    X += 'CD'

while N - 100 >= 0:
    N -= 100
    X += 'C'

if N - 90 >= 0:
    N -= 90
    X += 'XC'

if N - 50 >= 0:
    N -= 50
    X += 'L'

if N - 40 >= 0:
    N -= 40
    X += 'XL'

while N - 10 >= 0:
    N -= 10
    X += 'X'

if N - 9 >= 0:
    N -= 9
    X += 'IX'

if N - 5 >= 0:
    N -= 5
    X += 'V'

if N - 4 >= 0:
    N -= 4
    X += 'IV'

while N - 1 >= 0:
    N -= 1
    X += 'I'

print(X)
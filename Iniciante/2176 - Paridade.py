S = input()
uns = 0

for i in S:
    if i == '1':
        uns += 1

if uns % 2 == 0:
    S += '0'
else:
    S += '1'

print(S)

N, M = map(int, input().split())

if M < 3:
    print('nova')
elif 3 <= M <= 96:
    if N < M:
        print('crescente')
    else:
        print('minguante')
else:
    print('cheia')

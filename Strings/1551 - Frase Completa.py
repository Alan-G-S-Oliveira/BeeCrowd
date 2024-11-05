N = int(input())
for _ in range(N):
    K = input()
    A = set()
    for i in K:
        if ord('a') <= ord(i) <= ord('z'):
            A.add(i)
    if len(A) == 26:
        print('frase completa')
    elif len(A) >= 13:
        print('frase quase completa')
    else:
        print('frase mal elaborada')

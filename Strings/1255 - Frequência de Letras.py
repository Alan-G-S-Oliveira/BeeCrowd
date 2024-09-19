N = int(input())

for _ in range(N):
    texto = (input().replace(' ', '')).lower()

    alfabeto = [''] * 26
    for i in texto:
        if i.isalpha():
            alfabeto[ord(i) - ord('a')] += i
    alfabeto.sort(key=lambda x: len(x), reverse= True)
    
    maior = len(alfabeto[0])
    cont = 0
    for i in alfabeto:
        if len(i) != maior:
            break
        cont += 1
    saida = sorted(alfabeto[:cont])

    for i in saida:
        print(i[0],end='')
    print()

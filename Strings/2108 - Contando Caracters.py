maior = 0
maior_palavra = ''
while True:
    frase = input().split()
    if frase == ['0']:
        break

    aux = max(frase, key= lambda x: len(x))
    if len(aux) >= maior:
        maior_palavra = aux
        maior = len(aux)
    print(''.join(str(len(frase[i])) + ('-' if i != len(frase) - 1 else '') for i in range(len(frase))))

print('\nThe biggest word: ' + maior_palavra)

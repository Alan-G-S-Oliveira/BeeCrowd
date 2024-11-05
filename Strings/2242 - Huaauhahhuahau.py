vogais = ['a', 'e', 'i', 'o', 'u']

palavra = input()
saida = ''.join(i for i in palavra if i in vogais)

print('S' if saida == saida[::-1] else 'N')

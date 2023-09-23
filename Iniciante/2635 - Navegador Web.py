def procura_string(string_1: str, string_2: str) -> bool:

    for i in range(len(string_1)):
        if string_1[i] != string_2[i]:
            return False
        
    return True

N = int(input())

pesquisa = []

for i in range(N):
    pesquisa.append(input())

Q = int(input())

for i in range(Q):
    palavra = input()
    qtd = 0
    maior = -1

    for j in range(N):
        if procura_string(palavra, pesquisa[j]):
            qtd += 1
            if len(pesquisa[j]) > maior:
                maior = len(pesquisa[j])
    
    if qtd > 0:
        print(f'{qtd} {maior}')
    else:
        print(-1)

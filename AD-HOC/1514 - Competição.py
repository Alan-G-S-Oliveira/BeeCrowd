def teste_regras1(questoes: list, num: int):
    teste = True
    for i in range(M):
        soma = 0
        for j in range(N):
            soma += questoes[j][i]
        if soma == num:
            teste = False
            break
    return teste

def teste_regras2(questoes: list, num: int):
    teste = True
    for i in questoes:
        if sum(i) == num:
            teste = False
            break
    return teste

while True:
    try:
        N, M = map(int, input().split())
        if N == M == 0:
            break
        questoes = []
        for _ in range(N):
            questoes.append(list(map(int, input().split())))
        
        regras = 0
        
        if teste_regras2(questoes, M):
            regras += 1
        if teste_regras2(questoes, 0):
            regras += 1
        if teste_regras1(questoes, 0):
            regras += 1
        if teste_regras1(questoes, N):
            regras += 1
        
        print(regras)

    except EOFError:
        break
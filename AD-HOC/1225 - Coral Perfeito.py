def media(lista: list):
    soma = 0
    for i in lista:
        soma += i

    return soma / len(lista)

while True:
    try:
        N = int(input())
        notas = list(map(int, input().split()))

        auxMedia = media(notas)
        if auxMedia % 1 != 0:
            print(-1)
        else:
            passos = 1
            for i in notas:
                if i > auxMedia:
                    passos += i - auxMedia
            print(int(passos))
        
    except EOFError:
        break

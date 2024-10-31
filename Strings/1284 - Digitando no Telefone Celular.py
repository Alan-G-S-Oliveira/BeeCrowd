def verifica(dicionario: list, palavra: str, original: str) -> int:
    tamanho = len(palavra)
    cont = 0
    conjunto = set()
    for i in dicionario:
        if i.startswith(palavra):
            if len(i) == tamanho:
                if palavra != original:
                    cont += 1
            else:
                conjunto.add(i[tamanho])
    return len(conjunto) + cont

while True:
    try:

        N = int(input())

        dicionario = []
        for _ in range(N):
            dicionario.append(input())

        tempo = N
        for i in dicionario:
            for j in range(1, len(i) + 1):
                aux = verifica(dicionario, i[:j], i)
                print(i[:j], i, aux)
                if aux > 1:
                    tempo += 1
            print()
        print(tempo)

    except EOFError:
        break
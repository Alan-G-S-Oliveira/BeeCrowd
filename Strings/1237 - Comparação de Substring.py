def verifica_substrings(string_1: str, string_2: str) -> int:
    if string_1 in string_2:
        return len(string_1)
    
    tamanho = 0
    maximo = len(string_1)
    for i in range(maximo):
        for j in range(i, maximo):
            if string_1[i:j + 1] in string_2:
                tamanho = (j - i) + 1 if (j - i + 1 > tamanho) else tamanho
    return tamanho

while True:
    try:

        string_1 = input()
        string_2 = input()

        if(len(string_1) < len(string_2)):
            print(verifica_substrings(string_1, string_2))
        else:
            print(verifica_substrings(string_2, string_1))

    except EOFError:
        break
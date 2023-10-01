def encontra_string(string_1: str, string_2: str) -> bool:

    i = len(string_1)
    j = len(string_2)

    if string_1 in string_2:
        if i == j:
            return True
        elif len(string_2) == string_2.find(string_1) + i:
            return True
        elif string_2[string_2.find(string_1) + i].isupper():
            return True
        else:
            return False
    return False

N = int(input())

for i in range(N):
    T = int(input())
    lista = []

    for j in range(T):
        lista.append(input())

    U = int(input())

    for j in range(U):
        composto = input()
        achou = False

        for k in range(T):
            if encontra_string(lista[k], composto):
                achou = True
                break
        
        if achou:
            print('Abortar')
        else:
            print('Prossiga')
    if i != N - 1:
        print()

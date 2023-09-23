lista = []

while True:
    try:
        joia = input()

        teste = True
        for i in range(len(lista)):
            if lista[i] == joia:
                teste = False
                break
            
        if teste:
            lista.append(joia)
            
    except EOFError:
        break

print(len(lista))

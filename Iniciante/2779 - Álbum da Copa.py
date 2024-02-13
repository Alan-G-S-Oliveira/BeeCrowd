def temNaLista(lista: list, X: int) -> bool:

    if X in lista:
        return True
        
    return False

N = int(input())
M = int(input())

lista = []

for i in range(M):
    X = int(input())

    if not(temNaLista(lista, X)):
        lista.append(X)

print(N - len(lista))

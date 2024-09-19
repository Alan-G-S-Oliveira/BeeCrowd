class Transacoes:
    def __init__(self, numero) -> None:
        self.numero = numero
        self.visitado = False
        self.sinal = '?'

def menor_modulo(lista, x):
    menor = min(lista[0].numero, -lista[0].numero)
    modulo = abs(lista[0].numero - x)
    for i in lista:
        if modulo > abs(i.numero - x):
            modulo = abs(i.numero - x)
            menor = i.numero
        elif modulo > abs(-i.numero - x):
            modulo = abs(-i.numero - x)
            menor = -i.numero

    return menor

while True:
    N, F = list(map(int, input().split()))
    if N == F == 0:
        break

    T = []
    for i in range(N):
        T.append(Transacoes(int(input())))

    print(menor_modulo(T, F))

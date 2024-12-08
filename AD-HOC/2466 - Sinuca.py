def minimo(lista: list) -> list:
    saida = []
    tam = len(lista)
    for i in range(1, tam):
        if lista[i] == lista[i - 1]:
            saida.append(1)
        else:
            saida.append(-1)
    return saida

def main():
    N = int(input())
    X = list(map(int, input().split()))

    while len(X) != 1:
        X = minimo(X)
    print('preta' if X[0] == 1 else 'branca')

if __name__ == '__main__':
    main()

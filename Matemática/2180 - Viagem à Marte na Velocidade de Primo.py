from sys import stdin

def crivo_de_eratostenes(n: int, x: int) -> list:
    primos = [True] * (n + 1)
    primos[0] = primos[1] = False

    saida = []
    for p in range(2, n):
        if primos[p]:
            for i in range(p * p, n + 1, p):
                primos[i] = False
            if p >= x:
                saida.append(p)
                if len(saida) == 10:
                    return saida

    return None

def main():
    peso = int(stdin.readline())
    velocidade = sum(crivo_de_eratostenes(70000, peso))

    print(f'{velocidade} km/h')
    print(f'{60000000 // velocidade} h / {2500000 // velocidade} d')

if __name__ == '__main__':
    main()

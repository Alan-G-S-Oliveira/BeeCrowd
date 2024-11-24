def qtd_bolos(receita: list, ingredientes: list, D: int) -> int:
    preco = 0
    for i in range(1, len(receita) - 1, 2):
        preco += ingredientes[receita[i]] * receita[i + 1]
    return D // preco

def main():
    T = int(input())
    for _ in range(T):
        D, I, B = map(int, input().split())
        P = list(map(int, input().split()))

        for i in range(B):
            receita = list(map(int, input().split()))
            aux = qtd_bolos(receita, P, D)
            if i == 0:
                maior = aux
            elif aux > maior:
                maior = aux
        print(maior)

if __name__ == '__main__':
    main()

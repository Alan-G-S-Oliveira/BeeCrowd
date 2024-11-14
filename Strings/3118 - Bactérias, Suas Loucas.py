def separar(atual: str) -> list:
    saida  = []
    aux = atual[0]
    for i in range(1, len(atual)):
        if atual[i] == atual[i - 1]:
            aux += atual[i]
        else:
            saida.append(aux)
            aux = atual[i]
    saida.append(aux)
    return saida

def main():
    N, M = map(int, input().split())
    R = []
    for _ in range(M):
        R.append(input().split())
    colonias = separar('A')
    for _ in range(N):
        atual = ''
        for i in colonias:
            for j in R:
                if j[0] == i:
                    atual += j[1]
                    break
        colonias = separar(atual)

    A = 0
    for i in atual:
        if i == 'A':
            A += 1
    B = len(atual) - A
    print(A, B)
if __name__ == '__main__':
    main()

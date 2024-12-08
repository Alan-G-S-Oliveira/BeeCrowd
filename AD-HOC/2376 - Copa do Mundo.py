def selecionar(times: list) -> list:
    classificados = []
    qtd = len(times) - 1
    for i in range(0, qtd, 2):
        X1, X2 = map(int, input().split())

        if X1 > X2:
            classificados.append(times[i])
        else:
            classificados.append(times[i + 1])
    return classificados

def main():
    classificados = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P']

    resultados = selecionar(classificados)
    resultados = selecionar(resultados)
    resultados = selecionar(resultados)
    resultados = selecionar(resultados)

    print(resultados[0])

if __name__ == '__main__':
    main()

def max_cross_subArray(array: list, ini: int, fim: int) -> tuple:
    meio = (ini + fim) // 2
    aux = maior = array[meio]
    indice1 = meio
    for i in range(meio - 1, ini - 1, -1):
        aux += array[i]
        if aux > maior:
            maior = aux
            indice1 = i

    aux = maior_dir = 0
    indice2 = meio
    for i in range(meio + 1, fim):
        aux += array[i]
        if aux > maior_dir:
            maior_dir = aux
            indice2 = i

    return (indice1, indice2 + 1, sum(array[indice1:indice2 + 1]))

def max_subArray(array: list, ini: int, fim: int) -> tuple:
    if fim - ini == 1:
        return (ini, fim, array[ini])
    
    meio = (ini + fim) // 2
    iniD, fimD, sumD = max_subArray(array, ini, meio)
    iniM, fimM, sumM = max_cross_subArray(array, ini, fim)
    iniE, fimE, sumE = max_subArray(array, meio, fim)

    if sumD >= sumM and sumD >= sumE:
        return (iniD, fimD, sumD)
    elif sumM >= sumD and sumM >= sumE:
        return (iniM, fimM, sumM)
    return (iniE, fimE, sumE)

def verifica_prejuizo(array: list) -> bool:
    for i in array:
        if i >= 0:
            return False
    return True

def main():
    while True:
        try:
            N = int(input())
            custoPorDia = int(input())
            receita = []

            for _ in range(N):
                receita.append(int(input()) - custoPorDia)
            
            if verifica_prejuizo(receita):
                print(0)
            else:
                _, _, soma_max = max_subArray(receita, 0, len(receita))
                print(soma_max)
                
        except EOFError:
            break

if __name__ == '__main__':
    main()

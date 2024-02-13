def n_numeros(matriz: list, inicio: int, fim: int, n: int) -> int:
        
    if fim - inicio == 0:
        return matriz[n -  1][inicio]

    soma = 0
    for i in range(fim - inicio + 1):
        soma += matriz[n - 1][inicio + i]

    return soma + min(n_numeros(matriz, inicio + 1, fim, n - 1), n_numeros(matriz, inicio, fim - 1, n - 1))

N = int(input())

matriz = []

for i in range(N):
    matriz.append(input().split())
    for j in range(N):
        matriz[i][j] = int(matriz[i][j]) 

soma = n_numeros(matriz, 0, N - 1, N)

print(soma)

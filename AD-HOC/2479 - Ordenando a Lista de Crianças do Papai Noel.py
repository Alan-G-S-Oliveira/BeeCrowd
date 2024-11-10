N = int(input())
lista = []
comportadas = 0
for _ in range(N):
    aux = input()
    lista.append(aux[2:])
    if aux[0] == '+':
        comportadas += 1

lista.sort()
for i in lista:
    print(i)
print(f'Se comportaram: {comportadas} | Nao se comportaram: {N - comportadas}')

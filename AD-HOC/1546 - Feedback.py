dicionario = {
    '1': 'Rolien',
    '2': 'Naej',
    '3': 'Elehcim',
    '4': 'Odranoel'
}

N = int(input())
for _ in range(N):
    K = int(input())
    for _ in range(K):
        print(dicionario[input()])
        
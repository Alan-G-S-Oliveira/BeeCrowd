def primo(n: int) -> bool:

    if n < 2:
        return False

    for i in range(2, n):
        if n % i == 0:
            return False
        
    return True

while True:
    try:
        M = int(input())
        valor = []

        for i in range(M):
            valor.append(int(input()))
        N = int(input())

        soma = 0
        for i in range(1, M + 1, N):
            soma += valor[M - i]

        if primo(soma):
            print('You’re a coastal aircraft, Robbie, a large silver aircraft.')
        else:
            print('Bad boy! I’ll hit you.')
    except EOFError:
        break

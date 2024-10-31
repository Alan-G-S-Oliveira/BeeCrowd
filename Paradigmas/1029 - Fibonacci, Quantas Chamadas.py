def chamadas_recursivas(N: int) -> tuple:
    antC = 0
    atualC = 0
    antF = 0
    atualF = 1
    for _ in range(1, N):
        auxC = antC
        antC = atualC
        atualC = antC + auxC + 2

        auxF = antF
        antF = atualF
        atualF = antF + auxF
    return atualC, atualF

N = int(input())

for _ in range(N):
    F = int(input())
    C, R = chamadas_recursivas(F)
    print(f'fib({F}) = {C} calls = {R}')

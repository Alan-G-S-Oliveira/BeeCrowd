def eh_primo(n: int) -> bool:

    if n == 2:
        return True
    
    if n % 2 == 0:
        return False

    for i in range(3, round(n**0.5), 2):
        if n % i == 0:
            return False
        
    return True

def josephus(n: int, primos: list) -> int:
    ultimo = 0
    for i in range(1, n + 1):
        ultimo = (ultimo + primos[(n + 1) - i]) % i

    return ultimo + 1

primos = []

i = 0
j = 2
while i < 3503:
    if eh_primo(j):
        primos.append(j)
        i += 1
    j += 1

while True:
    N = int(input())
    if N == 0:
        break

    print(josephus(N, primos))

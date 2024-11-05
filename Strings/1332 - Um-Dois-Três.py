def parecido(x: str, y: str) -> bool:
    diferente = 0
    if len(x) != len(y):
        return False
    for i, j in zip(x, y):
        if i != j:
            diferente += 1
    if diferente <= 1:
        return True
    return False

N = int(input())
X = 0
for _ in range(N):
    L = input()
    if parecido(L, 'one'):
        print(1)
    elif parecido(L, 'two'):
        print(2)
    elif parecido(L, 'three'):
        print(3)

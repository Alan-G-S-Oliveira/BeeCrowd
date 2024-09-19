leds = {
    '1': 2,
    '2': 5,
    '3': 5,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 3,
    '8': 7,
    '9': 6,
    '0': 6
}

N = int(input())

for _ in range(N):
    V = input()

    saida = 0
    for i in V:
        saida += leds[i]
    print(f'{saida} leds')

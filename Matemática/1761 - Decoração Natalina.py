from math import tan

PI = 3.141592654

while True:
    try:
        A, B, C = map(float, input().split())
        altura = tan((PI * A) / 180) * B + C
        
        print('%.2f' % (5 * altura))

    except EOFError:
        break

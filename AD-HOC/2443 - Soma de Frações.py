from sys import stdin
from math import gcd

def main():
    a, b, c, d = map(int, stdin.readline().split())
    denominador = b * d
    numerador = d * a + b * c

    if numerador % denominador == 0:
        print(f'{numerador // denominador} 1')
    else:

        aux = gcd(numerador, denominador)

        print(f'{numerador // aux} {denominador // aux}')

if __name__ == '__main__':
    main()

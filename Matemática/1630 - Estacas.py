from math import gcd

def main():
    while True:
        try:
            X, Y = map(int, input().split())
            comprimento = 2 * (X + Y)
            print(int(comprimento / gcd(X, Y)))
        except EOFError:
            break

if __name__ == '__main__':
    main()        
    
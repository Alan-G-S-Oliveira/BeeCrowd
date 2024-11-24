from math import factorial
def main():
    while True:
        try:
            N, M = map(int, input().split())
            print(factorial(N) + factorial(M)) 
        except EOFError:
            break

if __name__ == '__main__':
    main()

import sys

def main():
    while True:
        A, B, C = map(int, sys.stdin.readline().split())
        if A == B == C == 0:
            break
        print(int((A * B * C) ** (1 / 3)))

if __name__  == '__main__':
    main()

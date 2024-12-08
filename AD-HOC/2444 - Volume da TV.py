from sys import stdin

def main():
    V, T = map(int, stdin.readline().split())
    A = list(map(int, stdin.readline().split()))

    for i in A:
        V += i
        V = max(V, 0)
        V = min(V, 100)
    print(V)

if __name__ == '__main__':
    main()

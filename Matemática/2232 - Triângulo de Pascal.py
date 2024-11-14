def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        R = 0
        for i in range(N):
            R += 2 ** i
        print(R)

if __name__ == '__main__':
    main()
    
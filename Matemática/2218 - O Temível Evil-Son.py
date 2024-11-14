def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        atual = 1
        atual += (N * (N + 1)) / 2
        print(int(atual))

if __name__ == '__main__':
    main()
    
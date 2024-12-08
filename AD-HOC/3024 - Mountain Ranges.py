def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))

    maior = 1
    for i in range(N - 1):
        aux = 1
        for j in range(i + 1, N):
            if A[j] - A[j - 1] <= M:
                aux += 1
            else:
                break
        maior = max(maior, aux)
    print(maior)

if __name__ == '__main__':
    main()

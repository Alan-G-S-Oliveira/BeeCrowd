T = int(input())

for i in range(T):
    N, K = input().split()

    N = int(N)
    K = int(K)

    total = (N // K) + (N % K)

    print(total)
    
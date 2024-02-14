N = int(input())
A = input().split()

for i in range(N):
    A[i] = int(A[i])

A.sort()

maior = A[-1] + 1

while True:
    for i in range(N):
        if (maior % A[i]) == 0 and A[i] != 1:
            maior += 1
            break
    
    if i == N - 1:
        print(maior)
        break

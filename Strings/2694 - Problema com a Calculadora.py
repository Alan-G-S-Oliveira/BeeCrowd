N = int(input())
for _ in range(N):
    X = input()
    A = ''.join(i if i.isnumeric() else ' ' for i in X)
    A = list(map(int, A.split()))
    print(sum(A))
   
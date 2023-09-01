N = int(input())
N = str(N)
X = ''
for i in range(len(N)):
    X += N[len(N) - (i + 1)]

print(X)

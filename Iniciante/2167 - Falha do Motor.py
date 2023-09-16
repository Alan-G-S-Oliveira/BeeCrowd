N = int(input())
R = input().split()
posicao = 0

for i in range(N):
    R[i] = int(R[i])

for i in range(1, N):
    if R[i] < R[i - 1]:
        posicao = i + 1
        break

print(posicao)

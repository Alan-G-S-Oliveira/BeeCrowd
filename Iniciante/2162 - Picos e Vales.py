N = int(input())
H = input().split()


for i in range(N):
    H[i] = int(H[i])

if N == 2:
    if H[0] != H[1]:
        picoVale = True
    else:
        picoVale = False

i = 1
while i < N - 1:
    if H[i - 1] < H[i] > H[i + 1]:
        picoVale = True
    elif H[i - 1] > H[i] < H[i + 1]:
        picoVale = True
    else:
        picoVale = False
        break
    i += 1

if picoVale == True:
    print(1)
else:
    print(0)

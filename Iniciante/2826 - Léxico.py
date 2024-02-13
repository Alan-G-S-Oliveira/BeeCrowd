A = input()
B = input()

Achou = False

for i in range(min(len(A), len(B))):
    if A[i] < B[i]:
        print(A)
        print(B)
        Achou = True
    elif A[i] > B[i]:
        print(B)
        print(A)
        Achou = True
    if Achou:
        break

if not(Achou):
    if len(A) < len(B):
        print(A)
        print(B)
    else:
        print(B)
        print(A)
    
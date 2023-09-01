A, B = input().split()
A = float(A)
B = float(B)

aumento = ((B - A) / A) * 100

print(f'{aumento:.2f}%')
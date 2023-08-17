A, B, C = input().split()

A = int(A)
B = int(B)
C = int(C)

MaiorAB = int((A + B + abs(A - B)) / 2)

MaiorABC = int((MaiorAB + C + abs(MaiorAB - C)) / 2)

print(MaiorABC, "eh o maior")
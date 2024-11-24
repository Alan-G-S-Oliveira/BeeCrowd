A, B = map(int, input().split())

saida = int(B * (B + 1) / 2) - int(A * (A - 1) / 2)
print(saida)

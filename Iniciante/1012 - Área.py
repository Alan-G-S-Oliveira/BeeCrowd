import math

pi = 3.14159

A, B, C = input().split()

A = float(A)
B = float(B)
C = float(C)

triangulo = A * C / 2
circulo = pi * pow(C, 2)
trapezio = (A + B) * C / 2
quadrado = pow(B, 2)
retangulo = A * B

print("TRIANGULO: %.3f"% triangulo)
print("CIRCULO: %.3f"% circulo)
print("TRAPEZIO: %.3f"% trapezio)
print("QUADRADO: %.3f"% quadrado)
print("RETANGULO: %.3f"% retangulo)
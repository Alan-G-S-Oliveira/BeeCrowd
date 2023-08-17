valor = int(input())

print(valor)

nota_100 = int(valor / 100)
valor = valor % 100

nota_50 = int(valor / 50)
valor = valor % 50

nota_20 = int(valor / 20)
valor = valor % 20

nota_10 = int(valor / 10)
valor = valor % 10

nota_5 = int(valor / 5)
valor = valor % 5

nota_2 = int(valor / 2)
valor = valor % 2

nota_1 = valor

print(nota_100, "nota(s) de R$ 100,00")
print(nota_50, "nota(s) de R$ 50,00")
print(nota_20, "nota(s) de R$ 20,00")
print(nota_10, "nota(s) de R$ 10,00")
print(nota_5, "nota(s) de R$ 5,00")
print(nota_2, "nota(s) de R$ 2,00")
print(nota_1, "nota(s) de R$ 1,00")
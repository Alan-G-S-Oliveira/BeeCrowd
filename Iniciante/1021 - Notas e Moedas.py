valor = float(input())
valor = valor * 100
#Notas

nota_100 = int(valor / 10000)
valor = valor % 10000

nota_50 = int(valor / 5000)
valor = valor % 5000

nota_20 = int(valor / 2000)
valor = valor % 2000

nota_10 = int(valor / 1000)
valor = valor % 1000

nota_5 = int(valor / 500)
valor = valor % 500

nota_2 = int(valor / 200)
valor = valor % 200

#Moedas

moeda_1 = int(valor / 100)
valor = valor % 100

moeda_05 = int(valor / 50)
valor = valor % 50
    
moeda_25 = int(valor / 25)
valor = valor % 25
    
moeda_01 = int(valor / 10)
valor = valor % 10
    
moeda_005 = int(valor / 5)

moeda_001 = int(valor % 5)

print("NOTAS:")
print(nota_100, "nota(s) de R$ 100.00")
print(nota_50, "nota(s) de R$ 50.00")
print(nota_20, "nota(s) de R$ 20.00")
print(nota_10, "nota(s) de R$ 10.00")
print(nota_5, "nota(s) de R$ 5.00")
print(nota_2, "nota(s) de R$ 2.00")

print("MOEDAS:")
print(moeda_1, "moeda(s) de R$ 1.00")
print(moeda_05, "moeda(s) de R$ 0.50")
print(moeda_25, "moeda(s) de R$ 0.25")
print(moeda_01, "moeda(s) de R$ 0.10")
print(moeda_005, "moeda(s) de R$ 0.05")
print(moeda_001, "moeda(s) de R$ 0.01")
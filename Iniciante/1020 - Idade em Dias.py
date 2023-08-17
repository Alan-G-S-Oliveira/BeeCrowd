idade = int(input())

anos = int(idade / 365)
idade = idade % 365

meses = int(idade / 30)

dias = idade % 30

print(anos, "ano(s)")
print(meses, "mes(es)")
print(dias, "dia(s)")
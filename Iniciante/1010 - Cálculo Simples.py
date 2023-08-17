peca_1, qtd_1, preco_1 = input().split()

peca_2, qtd_2, preco_2 = input().split()

valor_total = int(qtd_1) * float(preco_1) + int(qtd_2) * float(preco_2)

print("VALOR A PAGAR: R$ %.2f" % valor_total)
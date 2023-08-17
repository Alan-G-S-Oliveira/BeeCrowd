pergunta_1 = input()
pergunta_2 = input()
pergunta_3 = input()

if pergunta_1 == 'vertebrado':
    if pergunta_2 == 'ave':
        if pergunta_3 == 'carnivoro':
            print("aguia")
        else:
            print("pomba")
    else:
        if pergunta_3 == 'onivoro':
            print("homem")
        else:
            print("vaca")
else:
    if pergunta_2 == 'inseto':
        if pergunta_3 == 'hematofago':
            print("pulga")
        else:
            print("lagarta")
    else:
        if pergunta_3 == 'hematofago':
            print("sanguessuga")
        else:
            print("minhoca")
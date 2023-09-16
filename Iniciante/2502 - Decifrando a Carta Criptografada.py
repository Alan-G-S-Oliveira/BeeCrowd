while True:
    try:
        C, N = input().split()
        C = int(C)
        N = int(N)

        cifra = input()
        decifra = input()

        dicionario = {}
        for i in range(C):
            dicionario[decifra[i]] = cifra[i]
            dicionario[cifra[i]] = decifra[i]
            dicionario[decifra[i].lower()] = cifra[i].lower()
            dicionario[cifra[i].lower()] = decifra[i].lower()
        
        for i in range(N):
            string = input()
            nova_string = ""
            for char in string:
                if char in dicionario:
                    nova_string += dicionario[char]
                else:
                    nova_string += char
            print(nova_string)

        print()

    except EOFError:
        break

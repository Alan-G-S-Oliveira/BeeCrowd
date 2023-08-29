for i in range(3):
    soma = 0
    while True:
        corvo = input()
        if corvo == 'caw caw':
            break
        for j in range(3):
            if corvo[2 - j] == '*':
                soma += 2**j
    print(soma)
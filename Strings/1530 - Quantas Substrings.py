import sys

dicioario = {
    'a': '1',
    'b': '2',
    'c': '3',
    'd': '4',
    'e': '5',
    'f': '6',
    'g': '7',
    'h': '8',
    'i': '9',
    'j': '10',
    'k': '11',
    'l': '12',
    'm': '13',
    'n': '14',
    'o': '15',
    'p': '16',
    'q': '17',
    'r': '18',
    's': '19',
    't': '20',
    'u': '21',
    'v': '22',
    'w': '23',
    'x': '24',
    'y': '25',
    'z': '26'
}

sys.set_int_max_str_digits(10000)

def converte_inteiro(string: str) -> int:
    saida = ''.join(dicioario[i] for i in string)

    return int(saida)


while True:
    try:

        N = input().split('?')
        N.pop()

        string = ''
        conjunto = set()
        for i in N:
            string += i
            for j in range(len(string)):
                for k in range(j, len(string) + 1):
                    if j != k: 
                        conjunto.add(converte_inteiro(string[j:k]))
            print(len(conjunto))
    except EOFError:
        break
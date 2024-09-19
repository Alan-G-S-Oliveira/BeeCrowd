teclas = {
    '=': '-',
    '-': '0',
    '0': '9',
    '9': '8',
    '8': '7',
    '7': '6',
    '6': '5',
    '5': '4',
    '4': '3',
    '3': '2',
    '2': '1',
    '1': '`',
    '\\': ']',
    ']': '[',
    '[': 'P',
    'P': 'O',
    'O': 'I',
    'I': 'U',
    'U': 'Y',
    'Y': 'T',
    'T': 'R',
    'R': 'E',
    'E': 'W',
    'W': 'Q',
    '\'': ';',
    ';': 'L',
    'L': 'K',
    'K': 'J',
    'J': 'H',
    'H': 'G',
    'G': 'F',
    'F': 'D',
    'D': 'S',
    'S': 'A',
    '/': '.',
    '.': ',',
    ',': 'M',
    'M': 'N',
    'N': 'B',
    'B': 'V',
    'V': 'C',
    'C': 'X',
    'X': 'Z',
    ' ': ' '  
}

def conveter(frase):
    saida = ''
    for i in frase:
        saida += teclas[i]
    return saida

while True:
    try:
        X = input()
        print(conveter(X))
    except EOFError:
        break

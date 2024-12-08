from sys import stdin

dicionario = {
    'D': 0,
    'E': 1,
    'F': 2
}

def main():
    I, N = map(int, stdin.readline().split())

    valor = [I] * 3
    for _ in range(N):
        X = stdin.readline().split()
        if X[0] == 'C':
            valor[dicionario[X[1]]] -= int(X[2])
        elif X[0] == 'V':
            valor[dicionario[X[1]]] += int(X[2])
        else:
            valor[dicionario[X[1]]] += int(X[3])
            valor[dicionario[X[2]]] -= int(X[3])
    for i in range(3):
        print(valor[i],end='')
        if i != 2:
            print(end=' ')
        else:
            print()
            
if __name__ == '__main__':
    main()

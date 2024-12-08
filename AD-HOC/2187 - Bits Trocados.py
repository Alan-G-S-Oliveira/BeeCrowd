import sys

def main():
    cont = 1
    while True:
        V = int(sys.stdin.readline())
        if V == 0:
            break

        cinquenta = V // 50
        V %= 50
        dez = V // 10
        V %= 10
        cinco = V // 5
        um = V % 5
        
        print(f'Teste {cont}')
        print(f'{cinquenta} {dez} {cinco} {um}\n')
        cont += 1

if __name__ == '__main__':
    main()

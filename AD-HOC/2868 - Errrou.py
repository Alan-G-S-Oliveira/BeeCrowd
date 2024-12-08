import sys

def main():
    C =  int(sys.stdin.readline())
    for _ in range(C):
        calculo = sys.stdin.readline().split()
        if calculo[1] == '+':
            aux = int(calculo[-1]) - (int(calculo[0]) + int(calculo[2]))
        elif calculo[1] == 'x':
            aux = int(calculo[-1]) - (int(calculo[0]) * int(calculo[2]))
        else:
            aux = int(calculo[-1]) - (int(calculo[0]) - int(calculo[2]))
        
        print('E' + ('r' * abs(aux)) + 'ou!')

if __name__ == '__main__':
    main()

def main():
    while True:
        X = input()
        if X[0] == '-':
            break

        if X.isnumeric():
            aux = hex(int(X)).upper()[2:]
            print('0x' + aux)
        else:
            print(int(X, 16))

if __name__ == '__main__':
    main()

def main():
    Cv, Ce, Cs, Fv, Fe, Fs = map(int, input().split())

    Pc = 3 * Cv + Ce
    Pf = 3 * Fv + Fe
    if Pc > Pf:
        print('C')
    elif Pf > Pc:
        print('F')
    else:
        if Cs > Fs:
            print('C')
        elif Fs > Cs:
            print('F')
        else:
            print('=')

if __name__ == '__main__':
    main()

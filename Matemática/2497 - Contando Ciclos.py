def main():
    cont = 1
    while True:
        N = int(input())
        if N == -1:
            break
        print(f'Experiment {cont}: {N // 2} full cycle(s)')
        cont += 1

if __name__ == '__main__':
    main()

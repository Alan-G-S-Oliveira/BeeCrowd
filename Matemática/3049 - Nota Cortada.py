def main():
    B = int(input())
    T = int(input())
    A = 11200

    F = ((B + T) * 70) / 2
    M = A - F
    if F > M:
        print(1)
    elif F == M:
        print(0)
    else:
        print(2)

if __name__ == '__main__':
    main()

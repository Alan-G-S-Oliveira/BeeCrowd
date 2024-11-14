def main():
    A, B, C = map(int, input().split())
    X, Y, Z = map(int, input().split())

    print((X // A) * (Y // B) * (Z // C))

if __name__ == '__main__':
    main()

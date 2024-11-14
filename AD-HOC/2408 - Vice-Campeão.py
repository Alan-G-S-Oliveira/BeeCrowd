def main():
    A, B, C = map(int, input().split())
    if A > B > C or C > B > A:
        print(B)
    elif A > C > B or B > C > A:
        print(C)
    else:
        print(A)

if __name__ == '__main__':
    main()

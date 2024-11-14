def main():
    while True:
        A, B = map(int, input().split())
        if A == B == 0:
            break
        print(2 * A - B)
        
if __name__ == '__main__':
    main()

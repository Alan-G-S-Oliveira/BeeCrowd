def main() -> None:
    F1, F2 = map(float, input().split())

    PIB = 100 + F1
    PIB += (PIB * F2) / 100
    print('%.6f' % (PIB - 100))

if __name__ == '__main__':
    main()

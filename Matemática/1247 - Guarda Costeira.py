def main() -> None:
    while True:
        try:
            D, VF, VG = map(int, input().split())
            TF = (12) / VF
            TG = ((144 + D ** 2) ** 0.5) / VG
            print('S' if TG <= TF else 'N')
        except Exception:
            break

if __name__ == '__main__':
    main()

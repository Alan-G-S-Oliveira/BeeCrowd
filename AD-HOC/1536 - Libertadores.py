def main():
    N = int(input())
    for _ in range(N):
        P1 = input().split()
        P2 = input().split()
        P1 = [int(P1[0]), int(P1[2])]
        P2 = [int(P2[0]), int(P2[2])]

        if P1[0] > P1[1] and P2[1] >= P2[0]:
            print('Time 1')
        elif P1[1] > P1[0] and P2[0] >= P2[1]:
            print('Time 2')
        else:
            if P1[0] + P2[1] > P1[1] + P2[0]:
                print('Time 1')
            elif P1[1] + P2[0] > P1[0] + P2[1]:
                print('Time 2')
            else:
                if P2[0] > P1[0]:
                    print('Time 1')
                elif P1[1] > P2[1]:
                    print('Time 2')
                else:
                    print('Penaltis')

if __name__ == '__main__':
    main()

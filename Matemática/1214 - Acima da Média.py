C = int(input())
for _ in range(C):
    N = list(map(int, input().split()))
    N = N[1:]
    X = sum(N)

    Y = len(list(filter(lambda x: x > X / len(N), N))) * 100 / len(N)
    print('%.3f' % Y + '%')

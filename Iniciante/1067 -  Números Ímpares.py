x = int(input())

if 0 <= x <= 1000:
    for i in range(1, x + 1, 2):
        if i % 2 != 0:
            print(i)
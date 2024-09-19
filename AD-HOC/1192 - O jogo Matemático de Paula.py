N = int(input())
for i in range(N):
    entrada = list(input())
    if entrada[0] == entrada[2]:
        print(int(entrada[0]) * int(entrada[2]))
    elif entrada[1].islower():
        print(int(entrada[0]) + int(entrada[2]))
    else:
        print(int(entrada[2]) - int(entrada[0]))

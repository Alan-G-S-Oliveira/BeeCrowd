N = int(input())

if 2 < N < 1000:
    for i in range(1, 11):
        produto = i * N
        
        print(f"{i} x {N} = {produto}")
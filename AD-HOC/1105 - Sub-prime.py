while True:
    B, N = list(map(int, input().split()))
    if B == N == 0:
        break

    R = list(map(int, input().split()))

    for i in range(N): 
        D, C, V = list(map(int, input().split()))
        R[D - 1] -= V
        R[C - 1] += V

    aptos = True 
    for i in R:
        if i < 0:
            aptos = False
            break
    
    if aptos:
        print('S')
    else:
        print('N')

N = int(input())

for i in range(1, N + 1):
    x1, x2, x3 = input().split()
    
    x1 = float(x1)
    x2 = float(x2)
    x3 = float(x3)
    
    media = (x1 * 2 + x2 * 3 + x3 * 5) / 10
    
    print("%.1f"% media)
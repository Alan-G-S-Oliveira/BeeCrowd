from sys import stdin

def main():
    N, _ = map(int, stdin.readline().split())
    
    matriz = []
    for _ in range(N):
        matriz += stdin.readline().split()
    
    matriz.sort(key=lambda x: [x[1], x[0]], reverse= True)
    for i in matriz:
        print(i)

if __name__ == '__main__':
    main()

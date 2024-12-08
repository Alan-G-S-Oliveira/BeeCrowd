from sys import stdin

def main():
    N = int(stdin.readline())
    Q =  int(stdin.readline())


    A = list(range(1, N + 1))
    for _ in range(Q):
        X = list(map(int, stdin.readline().split()))
        if X[0] == 1:
            T1 = A.index(X[1])
            T2 = A.index(X[2])
            A[T1], A[T2] = A[T2], A[T1]
        else:
            cont = 0
            aux = X[1]
            while A[aux - 1] != X[1]:
                aux = A[aux - 1]
                cont += 1
            print(cont)
                
if __name__ == '__main__':
    main()

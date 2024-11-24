def main():
    N = int(input())
    medalhas = []
    for _ in range(N):
        pais, O, P, B = input().split()
        medalhas.append([pais, int(O), int(P), int(B)])
    medalhas.sort(key= lambda x: (-x[1], -x[2], -x[3], x[0]))
    for i in medalhas:
        print(f'{i[0]} {i[1]} {i[2]} {i[3]}')

if __name__ == '__main__':
    main()
    
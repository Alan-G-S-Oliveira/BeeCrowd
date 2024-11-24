def main():
    while True:
        N = int(input())
        if N == 0:
            break

        questoes = [0] * 26
        corretas = [False] * 26

        acertos = 0
        tempo_acerto = 0
        for i in range(N):
            A, B, C = input().split()
            if C == 'correct' and not(corretas[ord(A) - ord('A')]):
                questoes[ord(A) - ord('A')] += int(B)
                corretas[ord(A) - ord('A')] = not(corretas[ord(A) - ord('A')])
                acertos += 1
            elif C == 'incorrect':
                questoes[ord(A) - ord('A')] += 20
        
        if acertos != 0:
            for i in range(26):
                if corretas[i]:
                    tempo_acerto += questoes[i]
        print(acertos, tempo_acerto)
        
if __name__ == '__main__':
    main()

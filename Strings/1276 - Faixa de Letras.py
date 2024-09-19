while True:
    try:

        S = set((input().lower()).replace(' ', ''))
        S = list(S)
        S.sort()
        if S:
            inicial = S[0]
            final = S[0]
            for i in range(1, len(S)):
                if ord(S[i]) != ord(final) + 1:
                    print(f'{inicial}:{final},',end=' ')
                    inicial = S[i]
                final = S[i]
            if ord(S[-1]) != ord(final) + 1:
                print(f'{inicial}:{final}',end='')
        print()

    except EOFError:
        break
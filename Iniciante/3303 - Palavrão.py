while True:
    try:
        N = input()
        if len(N) >= 10:
            print('palavrao')
        else:
            print('palavrinha')
    except EOFError:
        break
    
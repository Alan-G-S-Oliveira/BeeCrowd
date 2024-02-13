while True:

    try:
        
        H, M = map(int, input().split())
        soma = 0
        operacao = 0

        QT = (H * 60) // M

        X = input().split()

        for i in range(QT):
            X[i] = float(X[i])

        for i in X:
            soma += i

        media = soma / float(QT)

        for i in X:
            operacao += (i - media) ** 2

        sensor = (operacao / (QT - 1)) ** 0.5

        print(f'{sensor:.5f}')

    except EOFError:
        break

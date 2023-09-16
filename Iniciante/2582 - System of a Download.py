dicionario = {

    0 : 'PROXYCITY',
    1 : 'P.Y.N.G.',
    2 : 'DNSUEY!',
    3 : 'SERVERS',
    4 : 'HOST!',
    5 : 'CRIPTONIZE',
    6 : 'OFFLINE DAY',
    7 : 'SALT',
    8 : 'ANSWER!',
    9 : 'RAR?',
    10 : 'WIFI ANTENNAS'

}

C = int(input())

for i in range(C):
    X, Y = input().split()
    X = int(X)
    Y = int(Y)

    print(dicionario[X + Y])

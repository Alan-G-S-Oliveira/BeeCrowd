while True:
    try:

        N = int(input())

        e1, e2 = input().split()

        e1 = int(e1)
        e2 = int(e2)

        a1 = input().split()
        a2 = input().split()
        t1 = input().split()
        t2 = input().split()

        for i in range(N):
            a1[i] = int(a1[i])
            a2[i] = int(a2[i])

        for i in range(N - 1):
            t1[i] = int(t1[i])
            t2[i] = int(t2[i])

        x1, x2 = input().split()

        x1 = int(x1)
        x2 = int(x2)

        pulo = 1
        cont = 0
        pulou = False

        tempo1 = []
        tempo2 = []

        for i in range(N):
            tempo1.append(0)
            tempo2.append(0)

        for i in range(N):

            tempo1[i] = e1
            cont = 0
            pulou = False

            for j in range(N):
                if pulou:
                    tempo1[i] += a2[j]
                elif pulo > cont:
                    tempo1[i] += a1[j]
                else:
                    tempo1[i] += t1[j - 1]
                    tempo1[i] += a2[j]
                    pulou = True
                cont += 1
            if pulou:
                tempo1[i] += x2
            else:
                tempo1[i] += x1
            pulo += 1

        pulo = 1
        cont = 0
        pulou = False

        for i in range(N):

            tempo2[i] = e2
            cont = 0
            pulou = False

            for j in range(N):
                if pulou:
                    tempo2[i] += a1[j]
                elif pulo > cont:
                    tempo2[i] += a2[j]
                else:
                    tempo2[i] += t2[j - 1]
                    tempo2[i] += a1[j]
                    pulou = True
                cont += 1
            if pulou:
                tempo2[i] += x1
            else:
                tempo2[i] += x2
            pulo += 1

        tempo1.sort()
        tempo2.sort()

        if(tempo1[0] < tempo2[0]):
            print(tempo1[0])
        else:
            print(tempo2[0])
    
    except EOFError:
        break

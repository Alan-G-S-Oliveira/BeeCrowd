from math import sqrt

while True:
    try:
         Xf, Yf, Xi, Yi, Vi, R1, R2 = input().split()
    except EOFError:
         break
    Xf = float(Xf)
    Yf = float(Yf)
    Xi = float(Xi)
    Yi = float(Yi)
    Vi = float(Vi)
    R1 = float(R1)
    R2 = float(R2)

    distancia = sqrt((Xf - Xi)**2 + (Yf - Yi)**2) 

    distancia -= (R1 + R2)
    distancia += Vi * 1.5

    if distancia <= 0:
        print('Y')
    else:
        print('N')

from math import sqrt

dicionario = {

    'fire' : [200, {1:20, 2:30, 3:50}],
    'water' : [300, {1:10, 2:25, 3:40}],
    'earth' : [400, {1:25, 2:55, 3:70}],
    'air' : [100, {1:18, 2:38, 3:60}]

}

T = int(input())

for i in range(T):
    w, h, x0, y0 = input().split()
    w = float(w)
    h = float(h)
    x0 = float(x0)
    y0 = float(y0)

    magia, N , cx, cy = input().split()
    N = int(N)
    cx = float(cx)
    cy = float(cy)

    if x0 <= cx <= x0 + w and y0 <= cy <= y0 + h:
        distancia = 0
    elif x0 <= cx <= x0 + w:
        if cy + dicionario[magia][1][N] < y0:
            distancia = y0 - cy
        else:
            distancia = cy - (y0 + h)
    elif y0 <= cy <= y0 + h:
        if cx + dicionario[magia][1][N] < x0:
            distancia = x0 - cx
        else:
            distancia = cx - (x0 + w)
    else:
        if cx < x0 and cy < y0:
            distancia = sqrt((cx - x0)**2 + (cy - y0)**2)
        elif cx < x0 and cy > y0 + h:
            distancia = sqrt((cx - x0)**2 + (cy - (y0 + h))**2)
        elif cx > x0 + w and cy > y0 + h:
            distancia = sqrt((cx - (x0 + w))**2 + (cy - (y0 + h))**2)
        else:
            distancia = sqrt((cx - (x0 + w))**2 + (cy - y0)**2)
    
    if distancia <= dicionario[magia][1][N]:
        print(dicionario[magia][0])
    else:
        print(0)

x1, x2, x3 = input().split()

x1 = int(x1)
x2 = int(x2)
x3 = int(x3)

if x1 < x2 < x3:
    y1  = x1
    y2 = x2
    y3 = x3
elif x1 < x3 < x2:
    y1 = x1
    y2 = x3
    y3 = x2
elif x2 < x1 < x3:
    y1 = x2
    y2 = x1
    y3 = x3
elif x2 < x3 < x1:
    y1 = x2
    y2 = x3
    y3 = x1
elif x3 < x2 < x1:
    y1 = x3
    y2 = x2
    y3 = x1
elif x3 < x1 < x2:
    y1 = x3
    y2 = x1
    y3 = x2

print(y1)
print(y2)
print(y3)
print()
print(x1)
print(x2)
print(x3)
Ca, Ba, Pa = input().split()
Ca = int(Ca)
Ba = int(Ba)
Pa = int(Pa)

Cr, Br, Pr = input().split()
Cr = int(Cr)
Br = int(Br)
Pr = int(Pr)

C = Ca - Cr
B = Ba - Br
P = Pa - Pr

if C >  0:
    C = 0
if B > 0:
    B = 0
if P > 0:
    P = 0

print(-(C + B + P))

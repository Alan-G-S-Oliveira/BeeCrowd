A = int(input())
B = int(input())
C = int(input())

A = str(A)
B = str(B)
C = str(C)

print(f'A = {A}, B = {B}, C = {C}')
print(f'A = {A.rjust(10)}, B = {B.rjust(10)}, C = {C.rjust(10)}')
print(f'A = {A.zfill(10)}, B = {B.zfill(10)}, C = {C.zfill(10)}')
print(f'A = {A.ljust(10)}, B = {B.ljust(10)}, C = {C.ljust(10)}')

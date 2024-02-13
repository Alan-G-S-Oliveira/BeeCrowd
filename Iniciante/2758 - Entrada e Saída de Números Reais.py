import struct

A, B = input().split()
C, D = input().split()

A = struct.unpack('f', struct.pack('f', float(A)))[0]
B = struct.unpack('f', struct.pack('f', float(B)))[0]
C = float(C)
D = float(D)

print(f'A = {A:.6f}, B = {B:.6f}')
print(f'C = {C:.6f}, D = {D:.6f}')
print(f'A = {A:.1f}, B = {B:.1f}')
print(f'C = {C:.1f}, D = {D:.1f}')
print(f'A = {A:.2f}, B = {B:.2f}')
print(f'C = {C:.2f}, D = {D:.2f}')
print(f'A = {A:.3f}, B = {B:.3f}')
print(f'C = {C:.3f}, D = {D:.3f}')
print(f'A = {A:.3E}, B = {B:.3E}')
print(f'C = {C:.3E}, D = {D:.3E}')
print(f'A = {A:.0f}, B = {B:.0f}')
print(f'C = {C:.0f}, D = {D:.0f}')

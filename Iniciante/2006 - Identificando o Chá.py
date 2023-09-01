T = input()
cha = input().split()
acerto = 0

for i in cha:
    if i == T:
        acerto += 1

print(acerto)
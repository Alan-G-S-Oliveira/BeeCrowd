m = 1

for i in range(0, 3):
    for j in range(0, 9, 2):
        for k in range(m, m + 3):
            if j == 0:
                print(f"I={i} J={k}")
            else:
                if i == 2:
                    break
                print(f"I={i}.{j} J={k}.{j}")
    m += 1
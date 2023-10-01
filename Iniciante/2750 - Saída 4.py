octal = [0, 1, 2, 3, 4, 5, 6, 7, 10, 11, 12, 13, 14, 15, 16, 17]
hexadecimal = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F']

print('-' * 39)
print('|  decimal  |  octal  |  Hexadecimal  |')
print('-' * 39)
for i in range(16):
    print(f'|     {i:2}    |   {octal[i]:2}    |       {hexadecimal[i]}       |')
print('-' * 39)

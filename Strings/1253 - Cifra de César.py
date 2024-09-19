N = int(input())

for _ in range(N):
    texto = input()
    deslocamento = int(input())
    A = ord('A')

    saida = ''.join(chr(A + ((ord(i) - A) - deslocamento) % 26) for i in texto)
    print(saida)

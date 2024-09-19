class Hora:
    def __init__(self, horas, minutos) -> None:
        self.horas = horas
        self.minutos = minutos
    
    def calculaTempo(self, hora) -> int:
        H1, M1 = self.horas, self.minutos
        H2, M2 = hora.horas, hora.minutos
        tempo = 0

        if M1 > M2:
            tempo += 60 - M1
            tempo += M2
            H1 += 1
        else:
            tempo += M2 - M1

        if H1 > H2:
            tempo += (24 - H1) * 60
            tempo += H2 * 60
        else:
            tempo += (H2 - H1) * 60

        return tempo

while True:
    H1, M1, H2, M2 = list(map(int, input().split()))

    if H1 == M1 == H2 == M2 == 0:
        break

    Hora1 = Hora(H1, M1)
    Hora2 = Hora(H2, M2)

    print(Hora1.calculaTempo(Hora2))

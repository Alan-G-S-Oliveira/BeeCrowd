class Carro:
    def __init__(self, placa, tamanho) -> None:
        self.placa = placa
        self.tamanho = tamanho
        self.vaga = -1

def busca_vagas(estacionamento: list, carro: Carro, maximo: int) -> tuple:

    tamanho_estacionamento = len(estacionamento)

    if tamanho_estacionamento == 0:
        if carro.tamanho <= maximo:
            return 0, 0
        raise ValueError
    
    vaga = estacionamento[0].vaga
    if vaga >= carro.tamanho:
        return 0, 0
    
    for i in range(tamanho_estacionamento - 1):
        posicao = estacionamento[i].vaga + estacionamento[i].tamanho
        vaga = estacionamento[i + 1].vaga - posicao
        if vaga >= carro.tamanho:
            return i + 1, posicao
        
    posicao = estacionamento[-1].vaga + estacionamento[-1].tamanho
    vaga = maximo - posicao
    if vaga >= carro.tamanho:
        return tamanho_estacionamento, posicao
    
    raise ValueError

def estacionar(estacionamento: list, carro: Carro, posicao: int, vaga: int) -> None:
    carro.vaga = vaga
    estacionamento.insert(posicao, carro)

def desestacionar(estacionamento: list, placa: int) -> None:
    for i in range(len(estacionamento)):
        if estacionamento[i].placa == placa:
            estacionamento.pop(i)
            return

while True:
    try:
        C, N = list(map(int, input().split()))

        estacionamento = []
        
        faturamento = 0
        for i in range(N):
            evento = input().split()

            P = int(evento[1])
            if evento[0] == 'C':
                Q = int(evento[2])
                try:
                    carro = Carro(P, Q)
                    x, y = busca_vagas(estacionamento, carro, C)
                    estacionar(estacionamento, carro, x, y)
                    faturamento += 10
                except ValueError:
                    pass

            else:
                desestacionar(estacionamento, P)
        print(faturamento)
                
    except EOFError:
        break

def verifica(senha, checar) -> bool:
    for i in senha:
        if checar(i):
            return True
    return False

while True:
    try:
        senha = input()
        if len(senha) < 6 or len(senha) > 32:
            print('Senha invalida.')
        elif not(verifica(senha, lambda x: 'a' <= x <= 'z') and verifica(senha, lambda x: 'A' <= x <= 'Z') and verifica(senha, lambda x: '0' <= x <= '9')):
            print('Senha invalida.')
        elif not(senha.isalnum()):
            print('Senha invalida.')
        else:
            print('Senha valida.')

    except EOFError:
        break

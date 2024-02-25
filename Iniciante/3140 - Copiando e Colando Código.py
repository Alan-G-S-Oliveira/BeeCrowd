body = False

while True:
    try:

        codigo = input()

        if '<body>' in codigo:
            body = True
        elif '</body>' in codigo:
            body = False
        elif body:
            print(codigo)
            
    except EOFError:
        break

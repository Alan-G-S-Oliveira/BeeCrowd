senha_valida = "2002"

while True:
    senha = input()
    
    if senha == senha_valida:
        break
        
    print("Senha Invalida")

print("Acesso Permitido")
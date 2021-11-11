# Entrar via teclado com o sexo de determinado usuário, aceitar somente “F” ou “M” como respostas válidas.

sexo = input('Digite seu sexo: ')
sexo=sexo.upper()

while (sexo != 'F' and sexo != 'M'):
    print('Sexo inválido!')
    sexo = input('Digite seu sexo: ')
    sexo=sexo.upper()

# Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. Caso contrário solicitar novamente apenas o segundo valor.

num1 = int(input("Digite um número: ")) # Recebe o primeiro valor
num2 = int(input("Digite outro número: ")) # Recebe o segundo valor

while num1 > num2: # Verifica se o primeiro valor é maior que o segundo
    print("O segundo valor é menor que o primeiro")
    num2 = int(input("Digite outro número: ")) # Recebe o segundo valor
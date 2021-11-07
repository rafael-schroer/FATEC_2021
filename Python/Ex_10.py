# Entrar via teclado, com dois valores distintos. Exibir o menor deles.
num1 = int(input("Digite um número: "))
num2 = int(input("Digite outro número: "))
if num1 > num2:
    print("O menor número é: ", num2)
else:
    print("O menor número é: ", num1)
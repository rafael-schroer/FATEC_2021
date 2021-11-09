# Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrário, enviar mensagem avisando que os números são idênticos.

num1 = int(input("Digite um número: "))
num2 = int(input("Digite outro número: "))

if num1 == num2:
    print("Os números são idênticos.")
elif num1 > num2:
    print("O maior número é: ", num1)
else:
    print("O maior número é: ", num2)
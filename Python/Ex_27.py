# Entrar via teclado com um valor (X) qualquer. Travar a digitação, no sentido de aceitar somente valores positivos. Solicitar o intervalo que o programa que deverá calcular a tabuada do valor digitado, sendo que o segundo valor (B), deverá ser maior que o primeiro (A), caso contrário, digitar novamente somente o segundo. Após a validação dos dados, exibir a tabuada do valor digitado, no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.

multiplicador = int(input("Digite um valor: "))

while multiplicador < 0:
    multiplicador = int(input("Digite um valor: "))

intervalo_inicial = int(input("Digite o valor inicial: "))
intervalo_final = int(input("Digite o valor final: "))
while intervalo_final < intervalo_inicial:
    intervalo_final = int(input("Digite o valor final: "))
print("Tabuada do valor digitado:")
for i in range(intervalo_final, intervalo_inicial - 1, -1):
    print(multiplicador, "x", i, "=", multiplicador * i)

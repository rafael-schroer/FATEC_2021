#  Entrar via teclado com um valor qualquer. Travar a digitação, no sentido de aceitar somente valores positivos. Após a digitação, exibir a tabuada do valor solicitado, no intervalo de um a dez.

multiplicador = int(input("Digite um número: "))
while multiplicador < 0:
    multiplicador = int(input("Digite um número positivo: "))
print("Tabuada do número digitado:")
for i in range(1, 11):
    print(multiplicador, "x", i, "=", multiplicador * i)


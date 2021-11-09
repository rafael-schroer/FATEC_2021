# Armazenar dez números na memória do computador. Exibir os valores na ordem inversa à da digitação.

num = []

for i in range(10):
    num.append(int(input("Digite um número: ")))

print("\nOs números digitados foram: ")

for i in range(10):
    print(num[9-i])

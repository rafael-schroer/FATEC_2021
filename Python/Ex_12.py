# Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. Se a área for maior que 100, exibir a mensagem “Terreno grande”.

base = float(input("Digite a base do retângulo: "))
altura = float(input("Digite a altura do retângulo: "))
area = base * altura

if area > 100:
    print("Terreno grande")
# Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²

peso = float(input("Digite seu peso: "))
altura = float(input("Digite sua altura: "))

imc = peso / (altura ** 2)

print("Seu IMC é: ", imc)
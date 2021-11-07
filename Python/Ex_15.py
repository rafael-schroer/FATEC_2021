# Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

peso = float(input("Digite o seu peso: "))
altura = float(input("Digite a sua altura: "))

imc = peso / (altura ** 2)

if imc < 20:
    print("Você está abaixo do peso")
elif imc >= 20 and imc <= 25:
    print("Você está no peso ideal")
elif imc > 25 and imc <= 30:
    print("Você está acima do peso")
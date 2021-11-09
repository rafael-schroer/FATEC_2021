# Entrar com o peso, o sexo e a altura de uma determinada pessoa. Após a digitação, exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².

peso = float(input("Digite o seu peso: "))
sexo = input("Digite o seu sexo: ")
altura = float(input("Digite a sua altura: "))

sexo=sexo.upper()

imc = peso / (altura ** 2)

if sexo == "M" and imc < 20:
    print("Você está abaixo do peso ideal.")
elif sexo == "M" and imc >= 20 and imc < 25:
    print("Você está com o peso ideal.")
elif sexo == "M" and imc >= 25: 
    print("Você está acima do peso ideal.")
elif sexo == "F" and imc < 19:
    print("Você está abaixo do peso ideal.")
elif sexo == "F" and imc >= 19 and imc < 24:
    print("Você está com o peso ideal.")
elif sexo == "F" and imc >= 24:
    print("Você está acima do peso ideal.")

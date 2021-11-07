# Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo. Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.

cat1 = float(input("Digite o primeiro cateto: "))
cat2 = float(input("Digite o segundo cateto: "))
hip = float(input("Digite a hipotenusa: "))

if (cat1 ** 2 + cat2 ** 2 == hip ** 2):
    print("Os catetos e a hipotenusa formam um triângulo retângulo.")
else:
    print("Os catetos e a hipotenusa não formam um triângulo retângulo.")
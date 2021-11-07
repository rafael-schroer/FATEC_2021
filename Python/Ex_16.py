# A partir de três valores que serão digitados, verificar se formam ou não um triângulo. Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”. Um triângulo escaleno possui todos os lados diferentes, o isósceles, dois lados iguais e o eqüilátero, todos os lados iguais. Para existir triângulo é necessário que a soma de dois lados quaisquer seja maior que o outro, isto, para os três lados.

valor1= float(input("Digite o primeiro valor: "))
valor2= float(input("Digite o segundo valor: "))
valor3= float(input("Digite o terceiro valor: "))

if valor1 == valor2 and valor2 == valor3:
    print("O triângulo é equilátero")
elif valor1 == valor2 or valor2 == valor3 or valor1 == valor3:
    print("O triângulo é isósceles")
else:
    print("O triângulo é escaleno")
# Armazenar vinte valores na memória. Após a digitação, entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor e armazenar o resultado em outro vetor, porém em posições equivalentes. Exibir os vetores na tela.

memoria = []
multiplicador = []

for i in range(20):
    memoria.append(int(input("Digite um valor: ")))

mult = int(input("Digite um valor para multiplicar: "))

multiplicador = [memoria[i] * mult for i in range(20)]

print(memoria)
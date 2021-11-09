# Armazenar vinte valores em um vetor. Após a digitação, entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor e armazenar o resultado no próprio vetor, na respectiva posição.


vetor = []
for i in range(20):
    vetor.append(int(input("Digite um valor: ")))
    

constante = int(input("Digite uma constante: "))

for i in range(20):
    vetor[i] = vetor[i] * constante

print(vetor)
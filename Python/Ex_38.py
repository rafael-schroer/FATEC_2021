#Armazenar seis valores em uma matriz de ordem 2x3. Apresentar os valores na tela.

matriz = [[0,0,0],[0,0,0]]


for i in range(0,2):
    for j in range(0,3):
        matriz[i][j] = int(input("Digite um valor: "))


print (matriz)

# Entrar via teclado com doze valores e armazená-los em uma matriz de ordem 3x4. Após a digitação dos valores solicitar uma constante multiplicativa, que deverá multiplicar cada valor matriz e armazenar o resultado na própria matriz, nas posições correspondentes.

matriz = []
for i in range(3):
    linha = []
    for j in range(4):
        linha.append(int(input(f'Digite um valor para [{i}, {j}]: ')))
    matriz.append(linha)
multiplicador = int(input('Digite um valor para multiplicar: '))
for i in range(3):
    for j in range(4):
        matriz[i][j] *= multiplicador
print(matriz)
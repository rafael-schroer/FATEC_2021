# Armazenar um máximo de 20 valores em um vetor. A quantidade de valores a serem armazenados será escolhida pelo usuário. Enviar mensagem de erro, caso a quantidade de valores escolhida esteja fora da faixa possível e solicitar a quantidade novamente. Após a digitação dos valores, criar uma rotina de consulta, onde o usuário digita um número e o programa exibe em qual posição do vetor este número está localizado. Se o número não for encontrado, enviar mensagem “Valor não encontrado!”. Perguntar ao usuário se deseja ou não fazer uma nova consulta, consistir a resposta e encerrar o programa em caso negativo.

vetor = []  # Criação do vetor

# Recebe o tamanho do vetor
tamanho = int(input("Digite o tamanho do vetor: "))
if tamanho > 20:  # Verifica se o tamanho do vetor é maior que 20
    # Caso seja maior que 20, envia mensagem de erro
    print("O tamanho do vetor não pode ser maior que 20!")
    # Recebe o tamanho do vetor
    tamanho = int(input("Digite o tamanho do vetor: "))
for i in range(tamanho):  # Laço de repetição para armazenar os valores no vetor
    valor = int(input("Digite o valor: "))  # Recebe o valor
    vetor.append(valor)  # Adiciona o valor no vetor
# Recebe o valor a ser localizado
localizar = int(input("Digite o valor a ser localizado: "))

posicao = vetor.index(localizar)  # Busca o valor no vetor

if posicao == -1:  # Verifica se o valor não foi encontrado
    # Caso não encontrado, envia mensagem de erro
    print("Valor não encontrado!")
else:  # Caso encontrado
    print("O valor está na posição: ", posicao)  # Envia a posição do valor

# Pergunta se deseja fazer uma nova consulta
print("Deseja fazer uma nova consulta? (S/N)")
resposta =input()  # Recebe a resposta
resposta = resposta.upper()  # Converte a resposta para maiúscula
if resposta == "S":  # Caso a resposta seja S
    # Recebe o valor a ser localizado
    localizar = int(input("Digite o valor a ser localizado: "))
    posicao = vetor.index(localizar)  # Busca o valor no vetor
    if posicao == -1:  # Verifica se o valor não foi encontradoo
        # Caso não encontrado, envia mensagem de erro
        print("Valor não encontrado!")
    else:  # Caso encontrado
        print("O valor está na posição: ", posicao)  # Envia a posição do valor
else:  # Caso a resposta seja N
    print("Programa encerrado!")  # Envia mensagem de encerramento
    exit()  # Encerra o programa

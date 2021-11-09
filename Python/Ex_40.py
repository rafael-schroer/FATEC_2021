#Entrar com uma matriz de ordem MxN, onde a ordem também será escolhida pelo usuário, sendo que no máximo 10x10. A matriz não precisa ser quadrática. Após a digitação dos elementos, criar uma rotina de consulta, onde o usuário digita um valor e a rotina exibe em qual (ou quais) posição da matriz, o valor escolhido se encontra. Enviar mensagem comunicando se por acaso o valor não estiver armazenado na matriz. Perguntar ao usuário, se deseja ou não fazer nova consulta.

matriz = []
m = int(input("Digite a ordem da matriz: "))
if m > 10:
    print("A matriz não pode ser maior que 10x10")
else:
    n = int(input("Digite a ordem da matriz: "))
    if n > 10:
        print("A matriz não pode ser maior que 10x10")
    else:
        for i in range(m):
            linha = []
            for j in range(n):
                linha.append(int(input("Digite o valor da posição: ")))

busca = int(input("Digite o valor a ser buscado: "))

for i in range(m):
    for j in range(n):
        if matriz[i][j] == busca:
            print("O valor %d se encontra na posição %d, %d" % (busca, i, j))
        else:
            print("O valor %d não se encontra na matriz" % busca)

print("Deseja fazer nova consulta? (S/N)")
resp = input()
resp = resp.upper()
if resp == "S":
    busca = int(input("Digite o valor a ser buscado: "))
    for i in range(m):
        for j in range(n):
            if matriz[i][j] == busca:
                print("O valor %d se encontra na posição %d, %d" % (busca, i, j))
            else:
                print("O valor %d não se encontra na matriz" % busca)
else:
    print("Obrigado por utilizar o programa")






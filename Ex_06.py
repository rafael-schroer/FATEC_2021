# Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. Calcular e exibir o valor correspondente em Reais (R$).
cotacaodolar = float(input("Digite o valor da cotação do dólar: "))
quantidadedolar = float(input("Digite a quantidade de dólares: "))

reais = cotacaodolar * quantidadedolar

print("O valor em reais é: R$ %.2f" % reais)

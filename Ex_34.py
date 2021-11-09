# Armazenar dez valores na memória do computador. Após a digitação dos valores, criar uma rotina para ler os valores e achar e exibir o maior deles.

vetor = []

for i in range(10):
    vetor.append(int(input("Digite um valor: ")))

num=max(vetor)

print("O maior valor digitado foi: ", num)

# Calcular e exibir a soma dos “N” primeiros valores da sequência abaixo. O valor “N” será digitado, deverá ser positivo, mas menor que cem. Caso o valor não satisfaça a restrição, enviar mensagem de erro e solicitar o valor novamente. A seqüência: 2, 5, 10, 17, 26, ....
soma = 2
n=int(input("Digite um valor: "))

while n<0 or n>=100:
    n=int(input("Digite um valor: "))

for i in range(1,n):
    soma=soma+i**2

print(soma)
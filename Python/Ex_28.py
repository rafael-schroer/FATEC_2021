# Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez. Entre as tabuadas, solicitar que o usuário pressione uma tecla.

print("Tabuada de 1 a 20")
print("Pressione uma tecla para continuar")

for i in range(1, 11):
    for j in range(1, 11):
        print(i, "x", j, "=", i * j)

print("Pressione uma tecla para continuar")
input()

for i in range(11, 21):
    for j in range(1, 11):
        print(i, "x", j, "=", i * j)

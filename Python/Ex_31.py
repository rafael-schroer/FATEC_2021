#  Exibir os vinte primeiros valores da série de Bergamaschi. A série: 1, 1, 1, 3, 5, 9, 17, ...

berm = [1,1]

for i in range(20):
    berm.append(berm[i] + berm[i+1])
    print(berm[i],end=" ")
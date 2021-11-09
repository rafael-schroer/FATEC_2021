# Uma escola com cursos em regime semestral realiza duas avaliações durante o semestre e calcula a média do aluno, da seguinte maneira: MEDIA = (P1 + 2P2) / 3 Fazer um programa para entrar via teclado com o valor da primeira nota (P1) e o programa deverá calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) para ser aprovado, sabendo que a média de aprovação é igual a cinco.

nota1=float(input("Digite a primeira nota: "))

print( "Ainda faltam %.2f para a segunda nota para aprovação" %((15-nota1)/2))
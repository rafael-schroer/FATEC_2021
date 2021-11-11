# Exibir os trinta primeiros valores da série de Fibonacci. A série: 1, 1, 2, 3, 5, 8, ...
fib = [1, 1]

for i in range(30):
    fib.append(fib[-1] + fib[-2])
    print(fib[i], end=' ')

import math

# Recebe o valor do número natural
numero = int(input('Digite um número natural: '))

# Verifica se o número é par ou ímpar
if numero % 2 == 0:
    output = 'é um número par'
else:
    output = 'é um número ímpar'

# Imprime o resultado
print('O número ' + str(numero) + ' ' + output + '!')
import math

# Recebe o valor do raio
raio = float(input("Digite o raio: "))

if raio < 0:
    print("O raio deve ser maior que zero!")

else:
    # Permite calcular a área de um círculo
    area = round(math.pi * raio**2, 2)

    # Permite calcular o perímetro de um círculo
    perimetro = round(2 * math.pi * raio, 2)

    print("Área: ", area, "Perímetro: ", perimetro)

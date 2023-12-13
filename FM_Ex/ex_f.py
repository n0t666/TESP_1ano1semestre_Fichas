#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Dec 11 22:46:31 2023

@author: leandro
"""

# Recebe o valor das idades e dos nomes
Nome1 = input("Digite o nome da 1.ª pessoa: ")

Idade1 = int(input("Digite a 1.ª idade: "))

Nome2 = input("Digite o nome da 2.ª pessoa: ")

Idade2 = int(input("Digite a 2.ª idade: "))

Nome3 = input("Digite o nome da 3.ª pessoa: ")

Idade3 = int(input("Digite a 3.ª idade: "))


# Verifica se as idades são válidas
if Idade1 <= 0 or Idade2 <= 0 or Idade3 <= 0:
    print("As idades devem ser maiores que zero!")
else:
    print("As idades são válidas!")

# Calculos necessários:

if Idade1 >= Idade2:
    if Idade1 > Idade3:
        NomeMaior = Nome1
        if Idade2 >= Idade3:
            NomeDoMeio = Nome2
            NomeDoMenor = Nome3
        else:
            NomeDoMeio = Nome3
            NomeDoMenor = Nome2

#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Dec 18 12:16:39 2023

@author: leandro
"""

# Entrada de dados
numero = int(input('Introduza um número natural: '))

if numero == 1:
    lista = [1]
elif numero == 2:
    lista = [1, 1]
else:
    lista = [1,1]
    for i in range(2,numero):
        lista.append(lista[i-1] + lista[i-2])

print('*'*60)
print('A sequência é dada: ',lista)
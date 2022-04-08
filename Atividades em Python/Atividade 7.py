"""
Atividade 7 | PRODUTO DE UMA LISTA PELO INVESO DA OUTRA(SEM INVERTER A ORDEM DOS ELEMENTOS NA LISTA) ADICIONADO DAS PONTAS AO CENTRO
Adicionar e mostar 2 listas inseridas pelo usuario e o produto da primeira pelo inverso da segunda deve ser adicionado em zig-zag até o centro(posicao 0,-1,1,-2,2...) em uma 3ª lista 
Mostre todas as listas ao usuario
"""
from math import ceil

lista1, lista2, lista3 = [], [], []
print("\n\t    PRODUTO DE DUAS LISTAS\n\nDigite o TAMANHO das listas e cada um de seus VALORES:\n")

tamanho = int(input("\t\tTAMANHO = "))
print("\n\tLISTA 1:\n")
for i in range(tamanho):
    lista1.append(int(input(f"\t\tVALOR {i} = ")))

print("\n\tLISTA 2:\n")
for i in range(tamanho):
    lista2.append(int(input(f"\t\tVALOR {i} = ")))

for i in range(tamanho):
    lista3.insert(ceil(len(lista3) / 2), lista1[i] * lista2[ -(i + 1)])
	
print(f"\n\tLISTA 1: {lista1}")
print(f"\tLISTA 2: {lista2}")
print(f"\tLISTA 3: {lista3}")

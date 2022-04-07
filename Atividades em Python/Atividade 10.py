"""
ATIVIDADE 10
Montar uma matriz quadrada de tamanho e numeros inseridos pelo usuario(para os numeros: se ele digitar valores abaixo de 1, informe que não é aceito e peça para digitar novamente)
Multiplique cada valor da diagonal principal por 6 se primo ou por 4 se não primo e mostre a matriz
Divida cada valor da diagonal secundaria por 5 se par ou por 7 se impar e mostre a matriz
Adicione todos os valores resultantes de cada multiplicacao e divisao dos itens anteriores e os valores da antepenúltima coluna maiores que 13 à uma lista e mostre-a.
"""
from math import isqrt

def primo(numero): #Descobre se o numero é primo
    if numero==1:
        return False
    for divisor in range(2, isqrt(numero)+1):
        if numero%(divisor)==0:
            return False
    return True

def mostrarMatriz(matriz, numLinhas): #Separa cada lista em linhas como uma matriz
	print("\n")
	for linha in range(numLinhas):
		print(f"\t\t{matriz[linha]}")

#Usuario escolhe o tamanho da matriz
TAMANHO=int(input("\nTamanho da Matriz = "))
lista, matriz = [], []
for linha in range(TAMANHO):
	matriz.append([])
print("\n\n\t     LOGICA COM MATRIZES\n\n    Digite cada um dos VALORES da matriz:")

#Adicionando Valores maiores que 1 na matriz 1
print("\n\n\t\tMATRIZ:\n")
for linha in range(TAMANHO):
	for coluna in range(TAMANHO):
		matriz[linha].append(0)
		while matriz[linha][coluna]<=1:
			matriz[linha][coluna]=int(input(f"\t\tVALOR[{linha}, {coluna}]= "))
			if matriz[linha][coluna]<=1:
				print("Valor nao aceito! Por favor, digite valores MAIORES que 1")
mostrarMatriz(matriz, TAMANHO)

#Verificando se eh primo, multiplicando e apresentando a matriz
for linha in range(TAMANHO):
	if primo(matriz[linha][linha]):
		matriz[linha][linha]*=6
	else:
		matriz[linha][linha]*=4
	lista.append(matriz[linha][linha])

print("\nMultiplicando primos e nao primos da diagonal principal:")
mostrarMatriz(matriz, TAMANHO)

#Verificando se eh par, dividindo e apresentando a matriz
for linha in range(TAMANHO):
	if matriz[linha][-(linha+1)]%2==0:
		matriz[linha][-(linha+1)]=round(matriz[linha][-(linha+1)]/5)
	else:
		matriz[linha][-(linha+1)]=round(matriz[linha][-(linha+1)]/7)
	lista.append(matriz[linha][-(linha+1)])

print("\nDividindo pares e impares da diagonal secundaria:")
mostrarMatriz(matriz, TAMANHO)

#Identificando os elementos da coluna 9 maiores que 13.
print(f"\n\tValores da coluna {TAMANHO-2} maiores que 13:\n")
existeMaior_13=False
for linha in range(TAMANHO):
	if matriz[linha][TAMANHO-2]>13:
		print(f"\t\tVALOR[{linha},{TAMANHO-2}]={matriz[linha][TAMANHO-2]}")
		lista.append(matriz[linha][TAMANHO-2])
		existeMaior_13=True

if existeMaior_13==False:
	print("\t[Nenhum valor menor que 13]")

#Apresentando a lista
print("\n\tLista com os resultados dos itens anteriores:")
print(f"\n\t{lista}")
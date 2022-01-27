'''
Atividade 8 - LOGICA COM MATRIZES
Montar duas matrizes quadrada de tamanho e numeros inseridos pelo usuario(para os numeros: se ele digitar valores abaixo de 3.73, informe que não é aceito e peça para digitar novamente)
Multiplique as duas matrizes e adicione o resultado em uma 3ª matriz
Multiplique a diagonal principal da matriz 1 pela diagonal secundária da matriz 2 e substitua na diagonal principal de uma 4ª matriz cópia da matriz 3.
Identifique os numeros 52% maiores que a média para a matriz 3 e 4, individualmente.
Mostre cada matriz ao final de cada etapa.
'''
from math import fsum

def mostrarMatriz(matriz, numLinhas): #Separa cada lista em linhas como uma matriz
	for linha in range(numLinhas):
		print(f"\t\t{matriz[linha]}")

def mediaMatriz(matriz, Tamanho):
	somaTotal=0
	for lin in range(Tamanho):
		somaTotal+=fsum(matriz[lin])
	return somaTotal/(Tamanho**2)

def maiorPorcentoMedia(matriz, numDaMatriz, Tamanho, media):
	print(f"\n\tValores maiores que 52 porcento da media da Matriz {numDaMatriz}:")
	for lin in range(Tamanho):
		for col in range(Tamanho):
			if matriz[lin][col]>1.52*media:
				print(f"\t\tVALOR[{lin},{col}]={matriz[lin][col]}")

def adiValoresMaiores(matriz, numDaMatriz, Tamanho): #Usando o mesmo codigo para as duas matrizes
	print(f"\n\tMATRIZ {numDaMatriz}:\n")
	for lin in range(Tamanho):
		for col in range(Tamanho):
			matriz[lin].append(0)
			while matriz[lin][col]<=3.73:
				matriz[lin][col]=round(float(input(f"\t\tVALOR[{lin},{col}]= ")), 2)
				if matriz[lin][col]<=3.73:
					print("Valor nao aceito! Por favor, digite valores MAIORES que 3.73\n")

print("\n\t     LOGICA COM MATRIZES\n\n   Digite cada um dos VALORES das matrizes:\n")
TAM=int(input("\t\tTAMANHO = ")) #Escolhendo o Tamanho das matrizes
print(f"\t\tTAMANHO {TAM}x{TAM}")

#Adicionando Valores maiores que 3.73 para as matrizes 1 e 2
matriz_1=[]
matriz_2=[]
matriz_3=[]
matriz_4=[]
for linha in range(TAM):
	matriz_1.append([])
	matriz_2.append([])
	matriz_3.append([])
	matriz_4.append([])
adiValoresMaiores(matriz_1, 1, TAM)
mostrarMatriz(matriz_1, TAM)
adiValoresMaiores(matriz_2, 2, TAM)
mostrarMatriz(matriz_2, TAM)

#Fazendo o produto entre a matriz 1 e 2 e armazenando na matriz 3
produto=0
for lin in range(TAM):
	for col in range(TAM):
		for c in range(TAM):
			produto+=(matriz_1[lin][c]*matriz_2[c][col])
		matriz_3[lin].append(produto)
		produto=0
print("\n\n\tMATRIZ 3:\n\t")
mostrarMatriz(matriz_3, TAM)

#Adicionando a matriz 3 na 4 e multiplicando os elementos da diagonal principal da matriz 1 pela diagonal secund�ria da matriz 2 e substituindo na diagonal principal da matriz 4
matriz_4=matriz_3
for lin in range(TAM):
	matriz_4[lin][lin]=matriz_1[lin][lin]*matriz_2[lin][-(lin+1)]
print("\n\n\tMATRIZ 4:\n\t\t")
mostrarMatriz(matriz_4, TAM)

#Identificando os numeros 52% maiores que a média para a matriz 3 e 4, individualmente.
maiorPorcentoMedia(matriz_3, 3, TAM, mediaMatriz(matriz_3, TAM))
maiorPorcentoMedia(matriz_4, 4, TAM, mediaMatriz(matriz_4, TAM))

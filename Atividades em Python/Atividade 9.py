'''
ATIVIDADE 9 | SISTEMA DE NOTAS E FREQUENCIA
Fazer uma matriz dos estudantes com as notas de cada avaliação, média e frequencia (o numero de estudantes, avaliações, notas e frequencia é inserido pelo usuario)
Calcule a media geral da turma
'''
def mostrarMatriz(matriz, numLinhas): #Separa cada lista em linhas como uma matriz
	print("\n")
	for linha in range(numLinhas):
		print(f"\t   {matriz[linha]}")

print("\n\tSISTEMA DE NOTAS E FREQUENCIA\n\n\tDigite o que for pedido:\n")
EST=int(input("\t   Numero de Estudantes= "))
AVA=int(input("\t   Numero de Avaliacoes= "))
TAM=AVA+2
matriz=[]
for linha in range(EST):
	matriz.append([])

#Adicionando Valores na matriz e calculando a media
print("\n\tNOTA [ESTUDANTE,AVALIACAO]:\n")
for estudante in range(EST):
	media=0
	for avaliacao in range(AVA):
		matriz[estudante].append(0)
		matriz[estudante][avaliacao]=round(float(input(f"\t   NOTA[{estudante+1},{avaliacao+1}]= ")), 2)
		media+=matriz[estudante][avaliacao]
	matriz[estudante].append(0)
	matriz[estudante][TAM-2]=(media/AVA)
mostrarMatriz(matriz, EST)

print("\n\tFREQUENCIA [ESTUDANTE]:\n")
for estudante in range(EST):
	matriz[estudante].append(0)
	matriz[estudante][TAM-1]=int(input(f"\t   FREQUENCIA[{estudante+1}]= "))
mostrarMatriz(matriz, EST)

#Media Geral da Turma
media=0
for estudante in range(EST):
	media+=matriz[estudante][TAM-1]
media/=EST
print(f"\n\tMEDIA GERAL = {media}")





















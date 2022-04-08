"""
Atividade 4 | CLASSIFICAR TRIANGULO (LADOS)
Indicar o tipo de triangulo comparando o tamanho dos lados fornecido pelo usuario
"""
print("\n\tTIPOS DE TRIANGULOS | COMPARANDO A MEDIDA DOS LADOS\n\nDigite um numero positivo e aperte ENTER, ao inserir cada lado do triangulo:\n")

A = int(input("Lado A = "))
B = int(input("Lado B = "))
C = int(input("Lado C = "))

if A + B >= C and A + C >= B and B + C >= A and A > 0 and B > 0 and C > 0:
    print("\nTipo do triangulo: ")
    if A == B and B == C:
        print("Equilatero (Todos os lados iguais)") 
    elif A != B and A != C and B != C:
        print("Escaleno (Todos os lados diferentes)")
    else: print("Isosceles (2 lados iguais)")       #if A == B or A == C or B == C: print("Isosceles") | Condicao que poderia ser usada.
else: print ("\nEssas medidas nao formam um triangulo.")
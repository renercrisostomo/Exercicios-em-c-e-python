"""
Atividade 6 | MEDIA PONDERADA E CONCEITO - FUNCOES
Verifique da nota do aluno com base na media ponderada envolvendo:
Trabalho(45%), Avaliação Parcial(20%) e Avaliação Final(35%)
Condição | Conceito
----- | -----  
 MP>=8 | A1
 8>MP>=7 | B2
 7>MP>=6 | C3
 6>MP>=5 | D4
 5>MP | 5E
"""
def MediaPonderada_Funcao(Trabalho,  AvaliacaoParcial,  AvaliacaoFinal):
    MediaPonderada = ((Trabalho*45)+(AvaliacaoParcial*20)+(AvaliacaoFinal*35))/100
    return MediaPonderada
    
def Conceito(MediaPonderada):
    if MediaPonderada>10 or MediaPonderada<0:
        return "Por favor, insira todas as notas com numeros de 0 a 10 e tente novamente."
    elif MediaPonderada>=8:
        return "A1"
    elif MediaPonderada>=7:
        return "B2"
    elif MediaPonderada>=6:
        return "C3"
    elif MediaPonderada>=5:
        return "D4"
    else: return "5E"

print("\tMEDIA PONDERADA E CONCEITO\n\nDigite a sua nota no TRABALHO, AVALIACAO PARCIAL e na AVALIACAO FINAL:\t\t>Lembre-se de usar pontos ao inves de virgulas!\n")

Trabalho=int(input("\tTRABALHO = "))
AvaliacaoParcial=int(input("\tAVALIACAO PARCIAL = "))
AvaliacaoFinal=int(input("\tAVALIACAO FINAL = "))
MediaPonderada = MediaPonderada_Funcao(Trabalho, AvaliacaoParcial, AvaliacaoFinal)
print(f"\n\tMEDIA PONDERADA = {MediaPonderada}")
print(f"\n\tCONCEITO = {Conceito(MediaPonderada)}")
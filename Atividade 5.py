"""
Atividade 5 | TABELA (PESO/ALTURA)
Classificar n pessoas com base nas condições na tabela:
              PESO
        <=60  <=90  >90         
          1A | 4D | 7G  <1.20 
          2B | 5E | 8H <=1.70 ALTURA
          3C | 6F | 9I  >1.70 
"""
print("\tCLASSIFICACAO | PESO/ALTURA\n\nInsira o numero de PESSOAS a serem classificadas e aperte ENTER:\n\n")
pessoas=int(input(f"\t\tPESSOAS = "))

print(f"\n\nAgora, digite o PESO e ALTURA para cada uma das {pessoas} pessoas:\t\t>Lembre-se de usar pontos ao inves de virgulas!")
for cont in range(pessoas):
    print(f"\n\n\t{cont+1}/{pessoas}) ----------------\n")
    peso=int(input("\t\tPESO(Kg) = "))
    altura=int(input("\t\tALTURA(m) = "))
    
    print("\t\tCLASSIFICACAO: ")
    if peso<=60:
        if altura<1.20:
            print("1A")
        elif altura<=1.70:
            print("2B")
        else: print("3C")
    elif peso<=90:
        if altura<1.20:
            print("4D")
        elif altura<=1.70:
            print("5E")
        else: print("6F")
    else:
        if altura<1.20:
            print("7G")
        elif altura<=1.70:
            print("8H")
        else: print("9I")
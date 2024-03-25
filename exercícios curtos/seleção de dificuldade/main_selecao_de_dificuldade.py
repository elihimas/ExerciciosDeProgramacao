print("SELEÇÃO DE DIFICULDADE\n")

opcao_selecionada = ""

while opcao_selecionada == "":
    print("ESCOLHA UMA OPÇÃO: fácil, médio e difícil")
    print("Sua escolha: ", end = "")
    entrada = input()
    print()

    eh_opcao_valida = entrada == "fácil" or entrada == "médio" or entrada == "difícil"

    if eh_opcao_valida:
        opcao_selecionada = entrada
    else:
        print("OPÇÃO INVÁLIDA!!")
        print()

print(f"Opção escolhida: {opcao_selecionada}")
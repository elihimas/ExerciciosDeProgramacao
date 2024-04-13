ultima_ficha_atendida = 0
proxima_ficha_disponivel = 1
pode_encerrar = False

def main():
    print(f"Gerenciador de filas {proxima_ficha_disponivel}\n")

    while not pode_encerrar:
        mostrar_opcoes()

        print("Opção: ", end="")
        opcao_selecionada = int(input())
        print()

        processar_opcoes(opcao_selecionada)

def mostrar_opcoes():
    print("Escolha uma opção:")
    print("1 - gerar ficha")
    print("2 - atender")
    print("3 - sair")
    print()


def processar_opcoes(opcao_selecionada):
    global ultima_ficha_atendida
    global proxima_ficha_disponivel
    global pode_encerrar

    if opcao_selecionada == 1:
        ficha_gerada = proxima_ficha_disponivel
        print(f"Ficha gerada: {ficha_gerada}")

        proxima_ficha_disponivel += 1
    elif opcao_selecionada == 2:
        ficha_a_ser_atendida = ultima_ficha_atendida + 1
        ultima_ficha_gerada = proxima_ficha_disponivel - 1

        if ficha_a_ser_atendida <= ultima_ficha_gerada:
            print(f"Atendendo ficha {ficha_a_ser_atendida}")
            ultima_ficha_atendida += 1
        else:
            print("Erro! Fila vazia!")
    elif opcao_selecionada == 3:
        ultima_ficha_gerada = proxima_ficha_disponivel - 1

        pode_encerrar = ultima_ficha_gerada == ultima_ficha_atendida
        if pode_encerrar:
            print("Obrigado por usar o sistema!!")
        else:
            print("Erro! Atenda os pacientes antes de encerrar!")
    else:
        print("Opção inválida!!")

    print()


if __name__ == "__main__":
    main()
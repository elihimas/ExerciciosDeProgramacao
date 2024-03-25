import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)

    println("SELEÇÃO DE DIFICULDADE\n")

    var opcaoSelecionada = ""

    while (opcaoSelecionada == "") {
        println("ESCOLHA UMA OPÇÃO: fácil, médio e difícil")
        print("Sua escolha: ")
        val input = scanner.nextLine()
        println()

        val ehOpcaoValida = input == "fácil" || input == "médio" || input == "difícil"

        if (ehOpcaoValida) {
            opcaoSelecionada = input
        } else {
            println("OPÇÃO INVÁLIDA!!")
            println()
        }
    }

    println("Opção escolhida: $opcaoSelecionada")
}
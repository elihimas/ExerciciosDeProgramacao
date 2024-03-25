import java.util.*

var ultimaFichaAtendida = 0
var proximaFichaDisponivel = 1
var podeEncerrar = false

fun main() {
    val scanner = Scanner(System.`in`)

    println("Gerenciador de filas\n")

    while (!podeEncerrar) {
        mostrarOpcoes()

        print("Opção: ")
        val opcaoSelecionada = scanner.nextInt()
        println()

        processarOpcoes(opcaoSelecionada)
    }
}

fun mostrarOpcoes() {
    println("Escolha uma opção:")
    println("1 - gerar ficha")
    println("2 - atender")
    println("3 - sair")
    println()
}

fun processarOpcoes(opcaoSelecionada: Int) {
    if (opcaoSelecionada == 1) {
        val fichaGerada = proximaFichaDisponivel
        println("Ficha gerada: $fichaGerada")

        proximaFichaDisponivel++
    } else if (opcaoSelecionada == 2) {
        val fichaASerAtendida = ultimaFichaAtendida + 1
        val ultimaFichaGerada = proximaFichaDisponivel - 1

        if (fichaASerAtendida <= ultimaFichaGerada) {
            println("Atendendo ficha $fichaASerAtendida")
            ultimaFichaAtendida++
        } else {
            println("Erro! Fila vazia!")
        }
    } else if (opcaoSelecionada == 3) {
        val ultimaFichaGerada = proximaFichaDisponivel - 1

        podeEncerrar = ultimaFichaGerada == ultimaFichaAtendida
        if (podeEncerrar) {
            println("Obrigado por usar o sistema!!")
        } else {
            println("Erro! Atenda os pacientes antes de encerrar!")
        }
    } else {
        println("Opção inválida!!")
    }

    println()
}
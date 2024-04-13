#include <stdio.h>

int ultimaFichaAtendida = 0;
int proximaFichaDisponivel = 1;
int podeEncerrar = 0;

void mostrarOpcoes();
void processarOpcoes(int opcaoSelecionada);

int main() {
    printf("Gerenciador de filas\n\n");

    while (!podeEncerrar) {
        mostrarOpcoes();

        printf("Opção: ");
        int opcaoSelecionada;
        scanf("%d", &opcaoSelecionada);
        printf("\n");

        processarOpcoes(opcaoSelecionada);
    }

    return 0;
}

void mostrarOpcoes() {
    printf("Escolha uma opção:\n");
    printf("1 - gerar ficha\n");
    printf("2 - atender\n");
    printf("3 - sair\n");
    printf("\n\n");
}

void processarOpcoes(int opcaoSelecionada) {
    if (opcaoSelecionada == 1) {
        int fichaGerada = proximaFichaDisponivel;
        printf("Ficha gerada: %d\n", fichaGerada);

        proximaFichaDisponivel++;
    } else if (opcaoSelecionada == 2) {
        int fichaASerAtendida = ultimaFichaAtendida + 1;
        int ultimaFichaGerada = proximaFichaDisponivel - 1;

        if (fichaASerAtendida <= ultimaFichaGerada) {
            printf("Atendendo ficha %d\n", fichaASerAtendida);
            ultimaFichaAtendida++;
        } else {
            printf("Erro! Fila vazia!\n");
        }
    } else if (opcaoSelecionada == 3) {
        int ultimaFichaGerada = proximaFichaDisponivel - 1;

        podeEncerrar = ultimaFichaGerada == ultimaFichaAtendida;
        if (podeEncerrar) {
            printf("Obrigado por usar o sistema!!\n");
        } else {
            printf("Erro! Atenda os pacientes antes de encerrar!\n");
        }
    } else {
        printf("Opção inválida!!\n");
    }

    printf("\n");
}
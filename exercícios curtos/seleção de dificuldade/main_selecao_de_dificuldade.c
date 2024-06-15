#include <stdio.h>
#include <string.h>

int main() {
    printf("SELECAO DE DIFICULDADE\n\n");

    char opcaoSelecionada[10] = "";

    while (strcmp(opcaoSelecionada, "") == 0) {
        printf("ESCOLHA UMA OPÇÃO: facil, medio e dificil\n");
        printf("Sua escolha: ");
        scanf( "%s", opcaoSelecionada);
        printf("\n");

        int ehOpcaoValida = strcmp(opcaoSelecionada, "facil") == 0
            || strcmp(opcaoSelecionada, "medio") == 0
            || strcmp(opcaoSelecionada, "dificil") == 0;

        if (!ehOpcaoValida) {
            printf("OPÇÃO INVÁLIDA!!\n\n");
        }
    }

    printf("Opção escolhida: %s\n", opcaoSelecionada);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    printf("SELECAO DE DIFICULDADE\n\n");

    char opcaoSelecionada[10] = "";

    while (strcmp(opcaoSelecionada, "") == 0) {
        printf("ESCOLHA UMA OPÇÃO: facil, medio e dificil\n");
        printf("Sua escolha: ");
        char input[25];
        scanf( "%s", input);
        printf("\n");

        int ehOpcaoValida = strcmp(input, "facil") == 0
            || strcmp(input, "medio") == 0
            || strcmp(input, "dificil") == 0;

        if (ehOpcaoValida) {
            strcpy(opcaoSelecionada, input);

        } else {
            printf("OPÇÃO INVÁLIDA!!\n\n");
        }
    }

    printf("Opção escolhida: %s\n", opcaoSelecionada);

    return 0;
}
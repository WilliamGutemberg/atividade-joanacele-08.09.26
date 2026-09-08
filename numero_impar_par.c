#include <stdio.h>

int main() {
    int opcao;
    int numero;

    // Exibição do menu
    printf("===== MENU =====\n");
    printf("1 - Verificar numero par ou impar\n");
    printf("2 - Verificar se e positivo ou negativo\n");
    printf("3 - Calcular o quadrado do numero\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Controle do menu via switch
    switch (opcao) {
        case 1:
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &numero);

            // Verifica se é Par ou Ímpar
            if (numero % 2 == 0) {
                printf("O numero %d e PAR.\n", numero);
            } else {
                printf("O numero %d e IMPAR.\n", numero);
            }

            // Restrição: informa também se é positivo, negativo ou zero
            if (numero > 0) {
                printf("Ele tambem e POSITIVO.\n");
            } else if (numero < 0) {
                printf("Ele tambem e NEGATIVO.\n");
            } else {
                printf("O numero e ZERO.\n");
            }
            break;

        case 2:
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &numero);

            if (numero > 0) {
                printf("O numero %d e POSITIVO.\n", numero);
            } else if (numero < 0) {
                printf("O numero %d e NEGATIVO.\n", numero);
            } else {
                printf("O numero e ZERO.\n");
            }
            break;

        case 3:
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &numero);

            printf("O quadrado de %d e: %d\n", numero, numero * numero);
            break;

        case 4:
            printf("\nSaindo do programa...\n");
            break;

        default:
            printf("\n[ERRO] Opcao invalida! Escolha um numero entre 1 e 4.\n");
            break;
    }

    return 0;
}
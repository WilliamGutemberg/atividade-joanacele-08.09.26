#include <stdio.h>

int main() {
    int valor_saque;
    
    // Define a quantidade inicial de notas disponíveis no caixa
    int estoque_inicial = 5; 
    
    // Limite máximo de notas que podem ser retiradas de cada tipo (preservando 1)
    int limite_nota = estoque_inicial - 1; 

    int qtd200 = 0, qtd100 = 0, qtd50 = 0, qtd20 = 0, qtd10 = 0, qtd5 = 0;
    int restante;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor_saque);

    // 1. Verifica se o valor é valido (deve ser positivo e multiplo de 5)
    if (valor_saque <= 0) {
        printf("\n[ERRO] Valor invalido! O valor do saque deve ser maior que zero.\n");
        return 0;
    }

    if (valor_saque % 5 != 0) {
        printf("\n[ERRO] Valor invalido! O caixa possui apenas notas de R$ 200, 100, 50, 20, 10 e 5.\n");
        return 0;
    }

    restante = valor_saque;

    // Calculo das notas de R$ 200
    qtd200 = restante / 200;
    if (qtd200 > limite_nota) {
        qtd200 = limite_nota;
    }
    restante -= qtd200 * 200;

    // Calculo das notas de R$ 100
    qtd100 = restante / 100;
    if (qtd100 > limite_nota) {
        qtd100 = limite_nota;
    }
    restante -= qtd100 * 100;

    // Calculo das notas de R$ 50
    qtd50 = restante / 50;
    if (qtd50 > limite_nota) {
        qtd50 = limite_nota;
    }
    restante -= qtd50 * 50;

    // Calculo das notas de R$ 20;
    qtd20 = restante / 20;
    if (qtd20 > limite_nota) {
        qtd20 = limite_nota;
    }
    restante -= qtd20 * 20;

    // Calculo das notas de R$ 10
    qtd10 = restante / 10;
    if (qtd10 > limite_nota) {
        qtd10 = limite_nota;
    }
    restante -= qtd10 * 10;

    // Calculo das notas de R$ 5
    qtd5 = restante / 5;
    if (qtd5 > limite_nota) {
        qtd5 = limite_nota;
    }
    restante -= qtd5 * 5;

    // 2. Verifica se foi possível realizar o saque sem violar a regra do estoque
    if (restante > 0) {
        printf("\nNao e possivel realizar o saque de R$ %d sem violar a regra de preservar ao menos 1 nota de cada valor no caixa.\n", valor_saque);
    } else {
        int total_cedulas = qtd200 + qtd100 + qtd50 + qtd20 + qtd10 + qtd5;

        printf("\n=== RESUMO DO SAQUE ===\n");
        printf("Valor solicitado: R$ %d\n", valor_saque);
        printf("Status: Valor valido e saque realizado com sucesso!\n");
        printf("Regra do caixa: Pelo menos 1 nota de cada tipo foi preservada.\n\n");

        printf("--- NOTAS ENTREGUES ---\n");
        if (qtd200 > 0) printf("Notas de R$ 200: %d\n", qtd200);
        if (qtd100 > 0) printf("Notas de R$ 100: %d\n", qtd100);
        if (qtd50 > 0)  printf("Notas de R$ 50 : %d\n", qtd50);
        if (qtd20 > 0)  printf("Notas de R$ 20 : %d\n", qtd20);
        if (qtd10 > 0)  printf("Notas de R$ 10 : %d\n", qtd10);
        if (qtd5 > 0)   printf("Notas de R$ 5  : %d\n", qtd5);

        printf("-----------------------\n");
        printf("Quantidade total de cedulas entregues: %d\n", total_cedulas);
    }

    return 0;
}
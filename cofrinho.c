#include <stdio.h>

int main()
{
    float adicionar,cofre=0;

    printf("Digite o quanto voce que colocar:(Digite 00 para ENCERRAR).\n");
    scanf("%f",&adicionar);

    while(adicionar != 00){
        cofre = cofre + adicionar;
        printf("Digite outro valor:\n");
        scanf("%f",&adicionar);
    }
    printf("O total guardado no seu cofre : %.2f",cofre);
}
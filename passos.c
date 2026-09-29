#include <stdio.h>

int main ()
{
    int passos, horas = 0, total = 0;

    while(total<10000){
        printf("Digite a quantidade de passos que voce deu nesta hora:\n");
        scanf("%d",&passos);
        total = total +passos;
        horas++;
    }
    printf("Voce deu %d passos" ,total);
    printf("\nLevando %d horas",horas);
}

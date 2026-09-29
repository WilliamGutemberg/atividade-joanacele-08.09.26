#include <stdio.h>

int main()
{
    int quantidade , media,total = 0;

    for(int i = 0; i<5 ; i++){
        printf("Digite a quantidade em metros cubiucos:\n");
        scanf("%d",&quantidade);
        total = total + quantidade;
        
        if (quantidade > 20){
            printf("Consumo acima da media!\n");
        }
        else{
            printf("Consumo abaixo da media!\n");
        }
    }
    media = total/5;
    printf("A media geral e %d",media);

return 0; 
}
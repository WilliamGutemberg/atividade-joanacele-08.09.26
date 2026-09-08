#include <stdio.h>

int main()
{
    //declaração variaveis 
    float ladoA, ladoB, ladoC;

    //Resposta usuario
    printf("Digite o valor do Lado A: ");
    scanf("%f" , &ladoA);

    printf("Digite o valor do Lado B: ");
    scanf("%f" , &ladoB);

    printf("Digite o valor do Lado C: ");
    scanf("%f" , &ladoC);

    //descobrindo se forma triangulo
    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA)
    {
        printf("Triangulo valido\n");
        
        //Classificando triangulos pelos lados
        if (ladoA == ladoB && ladoB == ladoC)
        {
            printf("Triangulo equilatrio\n");
        }
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC )
        {
            printf("Triangulo isosceles\n");
            
        }
        else
        {
            printf("Triangulo escaleno\n");
        }
        //clasificando pelos angulos
        if (ladoA * ladoA == (ladoB *ladoB) + (ladoC * ladoC))
        {
            printf("Triangulo retangulo");
        }
        else if (ladoA * ladoA > (ladoB * ladoB) + (ladoC +ladoC))
        {
            printf("Triangulo obtusangulo\n ");
        }
        else
        {
            printf("Triangulo acutangulo\n");
        }
    } 
    else
    {
        printf("Esses numeros nao resulta em um triangulo");
    }
}


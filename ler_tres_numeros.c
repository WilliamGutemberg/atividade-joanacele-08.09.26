#include <stdio.h>

int main()
{
    //declaracao variaveis 
    int A, B , C;
    

   //usuario
   printf("Digite primeiro numero: ");
   scanf("%d",&A);

   printf("Digite segundo numero: ");
   scanf("%d",&B);

   printf("Digite terceiro numero: ");
   scanf("%d",&C);

   //identificar maior valor
   if( A>=B && A>=C)
   {
    printf("Maior é : %d",A);
   }
   else if (B>= A && B>= C)
   {
    printf("Maior é : %d",B);
   }
   else
   {
    printf("Maior é : %d",C);
   }

   //identificar menor valor
   if( A<=B && A<=C)
   {
    printf("Menor é : %d",A);
   }
   else if (B<= A && B<= C)
   {
    printf("Menor é : %d",B);
   }
   else
   {
    printf("Menor é : %d",C);
   }

    // Identifica o valor intermediario
    if ((A >= B && A <= C) || (A >= C && A <= B))
    {
         printf("Intermediario é : %d",A);
    } else if ((B >= A && B <= C) || (B >= C && B <= A)) 
    {
        printf("Intermediario é : %d",B);
    } else
    {
         printf("Intermediario é : %d",C);
    }

     // Verifica se existem valores repetidos
    if (A == B || A == C || B == C) {
        printf("Existem valores repetidos: Sim\n");
    } else {
        printf("Existem valores repetidos: Nao\n");
    }

    // Verifica se os tres valores sao iguais
    if (A == B && B == C) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Os tres valores nao sao iguais. \n");
    }

     // Verifica se estão em ordem crescente 
    if (A < B && B < C) {
        printf("Estao em ordem crescente: Sim\n");
    } else {
        printf("Estao em ordem crescente: Nao\n");
    }

     // Verifica se estão em ordem decrescente estrita
    if (A > B && B > C) {
        printf("Estao em ordem decrescente. \n");
    } else {
        printf("Não stao em ordem decrescente.\n");
    }
}
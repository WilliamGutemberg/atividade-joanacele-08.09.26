#include <stdio.h>

int main()
{
    int atendimento,nota=0 ;

    for(int i = 0 ; i<10;i++){
        printf("Digite uma nota para o atendimento.(SENDO 10 PERFEITO E 0 PESSIMO):\n");
        scanf("%d",&atendimento);
        nota = nota + atendimento;
    }
    nota = nota/10;
    if(nota>=7){
        printf("Seu atendimento e nota %d",nota);
    }
    else{
        printf("MENSAGEM DE ALERTA SUA NOTA E %d",nota);
    }
}
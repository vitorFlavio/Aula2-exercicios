#include<stdio.h>
#include<stdlib.h>


int main(){

    float nota1,nota2,media;

    printf("Informe as notas\n");
    scanf("%f %f",&nota1,&nota2);

    media=(nota1+nota2)/2;

        if(media>=0 && media<4){

            printf("REPROVADO");

        }else if(media>=4 && media<7){

            printf("EXAME");
        
        }else if(media>=7){

            printf("APROVADO");

        }

    return 0;
}
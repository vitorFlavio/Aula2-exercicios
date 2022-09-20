#include<stdio.h>
#include<stdlib.h>


int main(){

    float nota1,nota2,media;

    printf("Informe as notas\n");
    scanf("%f %f",&nota1,&nota2);

    media=(nota1+nota2)/2;

        if(media>=7){

            printf("Aprovado");

        }else{
            printf("Reprovado");
        }

    return 0;
}
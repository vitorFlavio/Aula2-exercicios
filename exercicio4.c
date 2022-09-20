#include<stdio.h>
#include<stdlib.h>


int main(){

    float num1,num2,result;

    printf("Informe dois numeros\n");
    scanf("%f %f",&num1,&num2);

    result=num1/num2;

        if(num2==0){

            printf("Não realiza operações com denominador 0");

        }else{

            printf("Resultado da divisão: %4.2f",result);
        }

    return 0;
}
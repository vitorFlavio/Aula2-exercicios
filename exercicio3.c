#include<stdio.h>
#include<stdlib.h>


int main(){

    int num;

    printf("Informe um numero inteiro\n");
    scanf("%d",&num);

        if(num%2==0){

            printf("PAR");

        }else{
            printf("IMPAR");
        }

    return 0;
}
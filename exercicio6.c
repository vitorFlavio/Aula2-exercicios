#include<stdio.h>
#include<stdlib.h>


int main(){

    
    int num,dobro;

    printf("Informe um numero inteiro: ");
    scanf("%d",&num);



        if(num>0){

            dobro=num*num;

            printf("O dobro é: %d",dobro);

        }else if(num<0){

            printf("Não é positivo");
            
            
        }else{
            
            printf("É o zero");
        }

    return 0;
}
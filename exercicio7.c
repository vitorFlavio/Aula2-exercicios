#include<stdio.h>
#include<stdlib.h>


int main(){

    
    float n1,n2,n3;

    printf("Informe 3 valores:\n");
    scanf("%f %f %f",&n1,&n2,&n3);



        if(n1>n2 && n1>n3){


            printf("O maior numero é: %f",n1);

        }else if(n2>n1 && n2>n3){

            printf("O maior numero é: %f",n2);
            
            
        }else if(n3>n1 && n3>n2){
            
            printf("É o maior numero é: %f",n3);
        }

    return 0;
}
#include<stdio.h>
#include<stdlib.h>


int main(){

    int n1,n2;

    printf("Informe dois numeros\n");
    scanf("%d %d",&n1,&n2);

    if(n1<n2){

        printf("menor numero: %d",n1);

    }else if(n2<n1){
        printf("menor numero: %d",n2);

    }else{
        printf("Os numeros são iguais");
    }


    return 0;
}
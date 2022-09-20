#include<stdio.h>
#include<stdlib.h>


int main(){

    float n1,n2,n3;

    printf("Informe 3 valores\n");
    scanf("%f %f %f",&n1,&n2,&n3);


        if(n1<(n2+n3) && n2<(n1+n3) && n3<(n1+n2)){

            printf("Forma um triangulo");

        }else{

            printf("Não forma um triangulo");

        }
        

    return 0;
}
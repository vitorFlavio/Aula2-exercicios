#include<stdio.h>
#include<stdlib.h>


int main(){

    float altura,peso;
    int sexo;

    printf("Informe a sua altura: ");
    scanf("%f",&altura);

    printf("Informe o seu sexo:\n1.Masculino\n2.Feminino\n");
    scanf("%d",&sexo);


        if(sexo==1){

            peso=(72.7*altura)-58;

            printf("O seu peso ideal é: %f",peso);

        }else if(sexo==2){

            peso=(62.1*altura)-44.7;
            
            printf("O seu peso ideal é: %f",peso);
        }else{
            
            printf("Valor invalido");
        }

    return 0;
}
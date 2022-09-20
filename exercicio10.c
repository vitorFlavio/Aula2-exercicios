#include<stdio.h>
#include<stdlib.h>


int main(){

    int num;

    printf("Informe um numero no intervalo de 1 a 7 correspondente aos dias da semana:\n");
    //.Domingo .Segunda .Terça .Quarta .Quinta .Sexta .Sabado
    scanf("%d",&num);

    switch (num){
   
    
     case 1:
        
        printf("DOMINGO");
        
        break;
    
     case 2:
        
        printf("SEGUNDA");
        
        break;

     case 3:
        
        printf("TERÇA");
        
        break;

     case 4:
        
        printf("QUARTA");
        
        break;

     case 5:
        
        printf("QUINTA");
        
        break;

     case 6:
        
        printf("SEXTA");
        
        break;

    case 7:
        
        printf("SABADO");
        
        break;
    
    
    default:
        break;
    }


    if(num<1 || num>7){

        printf("Dia da semana invalido");
    }



    return 0;
}
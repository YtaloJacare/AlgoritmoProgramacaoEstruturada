#include<stdio.h>
#include<math.h>
main(){


    int num;

    printf("Digite um numero inteiro:");
    scanf("%d",&num);

    if(num==5 ){
        printf("Valor igual a 5");
    }else if(num==200){
        printf("Valor igual a 200");
    }else if(num==400){
        printf("Valor igual a 400");
    }else if(num>=500 && num<=1000){
        printf("intervalo entre 500 e 1000/Nao esta presente nas outras possibilidades");
    }else{
        printf("Nao se encaixa nas possibilidades");
    }

}

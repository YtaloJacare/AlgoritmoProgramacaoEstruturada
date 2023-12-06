#include<stdio.h>
#include<math.h>

main(){

    float salario, min=1320;

    printf("Digite seu Salario:");
    scanf("%f", &salario);

    if(salario >= min){

        printf("Seu Salario e maior  ou igual ao minimo");
    }


    else{
        printf("Seu Salario e menor que o minimo");
    }

    printf("\nContinua a excucao do algoritmo");

}
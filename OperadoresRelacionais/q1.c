#include<stdio.h>
#include<math.h>

main(){

    int idade, maior= 18;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if( idade >= maior){

        printf("Voce e maior de idade");
    }

    else{
        printf("Voce e menor de idade ");
    }

    printf("\nContinua a excucao do algoritmo");

}
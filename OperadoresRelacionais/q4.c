#include<stdio.h>
#include<math.h>

main(){

    float peso, min= 60;

    printf("Digite seu peso:");
    scanf("%f", &peso);

    if(peso >= min){
    printf("Voce tem 60 kg ou mais que 60kg");
    } else{
        printf("Voce tem menos que 60kg");
    }
    printf("\nContinua o cadastro");

}
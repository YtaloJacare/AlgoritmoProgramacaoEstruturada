#include <stdio.h>
#include <math.h>

main(){

    int par = 0, contador;

    printf("Primeiros 50 numeros pares!!");

    for(contador = 0; contador <= 100; contador++){
        if(contador %2 == 0){
            printf("\n%d", contador);
            par += contador;
        }
    }
    printf("\nSoma dos valores pares: %d", par);
}
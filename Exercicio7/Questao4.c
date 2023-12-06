#include <stdio.h>
#include <math.h>

main(){

    printf("[---- Os 5 multiplos de 3 maiores que 0 ----] ");
    int valor;

    for (valor = 0; valor < 16; valor += 3){
        if(valor > 0){
        printf("\n%d", valor);
    } 
}

}
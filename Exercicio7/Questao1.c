#include <stdio.h>
#include <math.h>

main(){

    int valor, contador = 0;
    printf("Digite um valor:");
    scanf("%d", &valor);

    while(contador <= valor){
        printf("\n%d", contador);
        contador++;
    }
    
}
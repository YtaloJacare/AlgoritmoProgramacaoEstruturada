#include <stdio.h>
#include <math.h>

main(){

    int valor;
    printf("Digite um valor:");
    scanf("%d", &valor);

    while(valor >= 0, valor--){
        printf("\n%d", valor);
    }
    
}
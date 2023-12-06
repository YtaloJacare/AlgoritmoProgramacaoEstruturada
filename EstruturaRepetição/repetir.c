#include<stdio.h>
#include<math.h>

main(){

    int v = 0;
    printf("\nValor: %d", v);


    v++; //incrementando uma unidade
    printf("\nValor: %d", v);

    v = v + 1;
    printf("\nValor: %d", v);

    v += 1;
    printf("\nValor: %d", v);

    v += 2;
    printf("\nValor: %d", v);

    //decremento

    v--;
    printf("\nValor: %d", v);

    v = v - 2; // mesma coisa que -=2
    printf("\nValor: %d", v);

}
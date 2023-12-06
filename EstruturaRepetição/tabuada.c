#include<stdio.h>
#include<math.h>

main(){

int v = 5, contador = 0, res;

    while(contador <=10){
        res = v * contador;
        printf("\n%d * %d = %d", v, contador , res);

        contador++;
    }
}
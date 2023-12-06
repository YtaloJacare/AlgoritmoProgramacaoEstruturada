#include<stdio.h>
#include<math.h>

main(){

    int v1 = 2, v2, soma, opcao, res, contador = 0;

/*    do{
        printf("Digite dois valores:");
        scanf("%d %d", &v1, &v2);

        soma = v1 + v2;

        printf("\nSoma: %d", soma);

        printf("\nDeseja fazer outra soma? 1 - Sim, 0- Nao :");.

        scanf("%d", &opcao);

    } while(opcao != 0); */

    do{
        res = v1 * contador;
        printf("\n%d * %d = %d", v1, contador, res);
         
        contador ++;
    }while(contador <= 10);

}
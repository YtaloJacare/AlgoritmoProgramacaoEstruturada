#include<stdio.h>
#include<math.h>


main(){

int numero;

printf("Digite um valor numerico: ");
scanf("%d", &numero);

if (numero <= 0) {
    printf("\nO valor deve ser positivo.");

} else {
    printf("\nOs divisores do valor %d equivalem: ", numero);

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

}
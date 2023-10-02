#include<stdio.h>
#include<math.h>

main(){

float X, Y;
    
printf("Defina um par ordenado (x,y): ");
scanf("%f %f", &X, &Y);
    
if (X == 0 && Y == 0) {
    printf("\nPonto de Origem (0,0)");

    } else if (X == 0) {
    printf("\nEixo Y - Ordenada ");

    } else if (Y == 0) {
    printf("\nEixo X - Abcissa");

    } else {
        if (X > 0){

            if (Y > 0) {

            printf("\nQuadrante 1 (Direita Superior)");

            } else {

            printf("\nQuadrante 2 (Esquerda Superior)");
            }

        } else {
            if (Y > 0) {

            printf("\nQuadrante 3 (Esquerda Inferior)");
            } else {

            printf("\nQuadrante 4 (Direita Inferior)");
            }
        }
    }

}
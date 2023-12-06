#include<stdio.h>
#include<math.h>

main(){

int real;
float dollar;

printf("[-------Cotacao 21/08/23-------]");

printf("\nDigite um valor em real para conversao em dolar:");
scanf("%d", &real);

dollar = real * 4.98;

printf("Conversao: %.2f", dollar);

}

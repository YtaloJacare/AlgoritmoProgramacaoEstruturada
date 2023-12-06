#include<stdio.h>
#include<math.h>

main(){

float mult;
float base, alt;

printf("Digite o valor de medida (base e altura):");
scanf("\n %f %f", &base, &alt);

mult = base * alt;

printf("Valor da area em metros quadrados: %.2f", mult);

}

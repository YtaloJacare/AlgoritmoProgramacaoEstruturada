#include<stdio.h>
#include<math.h>

main(){

int num1, num2, soma, mult, sub;
float div;


printf("Digite dois numeros!!");
scanf("\n %d %d", &num1, &num2);



soma = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = (float) num1 / (float) num2;


printf("Soma: %d, \nSubtracao: %d, \nMultiplicacao: %d, \nDivisao: %.2f", soma, sub, mult, div);

//potencia - biblioteca matemtica - math.h

int pot = pow (9,2);

printf("\nPotencia: %d", pot);

//operador modulo

int mod = num1 % num2;

printf("\nResto sa divisao: %d", mod);

}

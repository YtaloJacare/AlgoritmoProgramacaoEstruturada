#include<stdio.h>
#include<math.h>

main(){
  
int num;
double ope, raiz;

printf("F(x) = 5x + 3 / Raiz(x^2 - 16)");
printf("\nDigite um valor pata 'X':");
scanf("%d", &num);

ope = (( 5*num ) + 3);
num = pow (num,2);

raiz = ope / sqrt ( num - 16);
num = sqrt (num);

printf("A funcao do valor %d ,equivale: %.2f", num, raiz);
}

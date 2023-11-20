#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int validaQuantidade (int quantidadePecas){

if(quantidadePecas < 0){

return 0;
} 

return 1;

}


int calulaSalario(int valor, float salario){

float reajuste;

if(valor <= 50){
    reajuste = 0.0;

} else if(valor <= 80){
    reajuste = (valor - 50) * 0.50;

} else {
    reajuste = (valor - 50) * 0.50 + (valor - 80) * 0.75;  

}

return salario + reajuste;

}


void mostraFinal(float salario){

printf("\nReajuste do Salario: %.2f", salario);

}


main(){

int pecas;
float salarioB = 600.00;

do{

printf("Informe a quantidade pecas produzidas:");
scanf("%d", &pecas);

if(!validaQuantidade (pecas)){

printf("\nQuantidade de pecas invalidas para reajsute!!\n");

}

} while (!validaQuantidade(pecas));

float salarioF = calulaSalario(pecas, salarioB);

mostraFinal(salarioF);

return 0;

}
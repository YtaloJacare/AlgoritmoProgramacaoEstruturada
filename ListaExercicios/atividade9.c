#include<stdio.h>
#include<math.h>

main(){

float custo;
float porcentagem = 0.28;
float imposto = 0.45;
float valor;

printf("Digite o valor do custo de fabrica, para calculo do valor final do veiculo:");
scanf("%f", &custo);

float total1 = custo * imposto;
float total2 = custo * porcentagem;
valor = total1 + total2 + custo;

printf("Valor final do carro: %.2f", valor);

}

#include<stdio.h>
#include<math.h>

main(){

    float custo, frete, despesa, venda, valor, final, lucro, porcentagem;


    printf("[-_-_-_-Supermercado Jacare-_-_-_-]");

    printf("\nDigite o valor do custo do produto:");
    scanf("%f", &custo);

    printf("\nDigite o valor do frete do produto:");
    scanf("%f", &frete);

    printf("\nDigite o valor da despesa:");
    scanf("%f", &despesa);


    valor = custo + frete + despesa;

    printf("\nO custo do produto equivale: %.2f . \nDetermine o valor de venda:", valor);
    scanf("%f", &venda);
    setbuf(stdin, NULL);


//para ocorrer lucro o preço de venda deve ser maior que o custo//

    lucro = venda - valor;
    final = lucro/ valor;
    porcentagem = final * 100;
    


    printf("\nValor do lucro: %.2f", lucro);
    printf("\nPorcentagem de lucro: %.2f", porcentagem);
   


}

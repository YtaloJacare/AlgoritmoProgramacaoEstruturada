#include<stdio.h>
#include<math.h>


//Cardapio

main(){

    int num;
    int quant;
    float valor;

    printf("[~_------Jacare Lanches ------_~]");
    printf("\n[---O nosso cardapio possui os seguintes itens!!---]");
    printf("\n[---100 Cachorro Quente - RS10.10---]");
    printf("\n[---101 Bauru Simples - RS8.30 ---]");
    printf("\n[---102 Bauru c/Ovo - RS8.50 ---]");
    printf("\n[---103 Hamburguer - RS12.50 ---]");
    printf("\n[---104 Cheeseburguer - RS13.25 ---]");


    printf("\nEscolha um dos itens acima!!:");
    scanf("%d", &num);
    getchar();

    printf("\nEscolha a Quantidade!!:");
    scanf("%d", &quant);
    getchar();

    //estrutura 

    switch(num){

    case 100: valor = 10.10 * quant;
    printf("Cachorro Quente - Valor Final: %.2f", valor);
    break;

    case 101: valor = 8.30 * quant;
    printf("Bauru Simples - Valor Final: %.2f", valor);
    break;

    case 102: valor = 8.50 * quant;
    printf("Bauru c/Ovo - Valor Final: %.2f", valor);
    break;

    case 103: valor = 12.50 * quant;
    printf("Hamburguer - Valor Final: %.2f", valor);
    break;

    case 104: valor = 13.25 * quant;
    printf("Chesserburguer - Valor Final: %.2f", valor);
    break;
        
    default: printf("Nao tem no cardapio ze");
    }
}

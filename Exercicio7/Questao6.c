#include <stdio.h>
#include <math.h>

main(){

    int fruta, compra = 0, quant = 0;
    float preco;

    printf("[....HortiFruitt do Jaca....]");

    do{
    quant++;
    printf("\nEscolha uma das seguintes frutas: [1] - Abacaxi 5,00 [2] - Maca 1,00 [3] - Pera 4,00:");
    scanf("%d", &fruta);

    switch(fruta){

    case 1: preco = 5.00;
    break;

    case 2: preco = 1.00;
    break;

    case 3: preco = 4.00;
    break;
}   
    preco += quant;
    printf("Deseja escolher outra Fruta? [1] - Sim  [2] - Nao]:");
    scanf("%d", &compra);

}   while (compra == 1);

    printf("Valor da compra: %.2f", preco);
}
#include<stdio.h>
#include<math.h>


//Calorias

main(){

    int num;
    float calprato, calsob, calbeb;

    printf("[~_------ Balanca do Jacare  ------_~]");
    printf("\nPrincipais -[1 - vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne 350]");


    printf("\nEscolha um prato principal:");
    scanf("%d", &num);
    getchar();

    switch(num){

    case 1: printf("Vegatariano -Calorias: 180");
    calprato = 180;
    break;

    case 2: printf("Peixe -Calorias: 230");
    calprato = 230;
    break;

    case 3: printf("Frango -Calorias: 250");
    calprato = 250;
    break;

    case 4: printf("Carne -Calorias: 350 ");
    calprato = 350;
    break;

    default: printf("Não existente!!");
    }

    printf("\nSobremesas -[1 - Abacaxi, 2 - Sorvete Diet, 3 - Mouse Diet, 4 - Mouse Chocolate]");
    printf("\nEscolha uma Sobremesa:");
    scanf("%d", &num);
    getchar();

    switch(num){

    case 1: printf("Abacaxi - Calorias: 75");
    calsob = 75;
    break;

    case 2: printf("Sorve Diet - Calorias: 110");
    calsob = 110;
    break;

    case 3: printf("Mouse Diet - Calorias: 170");
    calsob = 170;
    break;

    case 4: printf("Mouse Chocolate - Calorias: 200");
    calsob = 200;
    break;

    default: printf("Não existente");
    }
    

    printf("\nBebidas -[1 - Cha, 2 - Suco de Laranja, 3 - Suco de Melao, 4 - Refri Diet]");
    printf("\nEscolha uma Bebidas:");
    scanf("%d", &num);
    getchar();

    switch(num){

    case 1: printf("Cha - Calorias: 20 cal");
    calbeb = 20;
    break;

    case 2: printf("Suco de Laranja - Calorias: 70 cal");
    calbeb = 70;
    break;

    case 3: printf("Suco de Melao - Calorias: 100 cal");
    calbeb = 100;
    break;

    case 4: printf("Refri Diet - Calorias: 65 cal");
    calbeb = 65;
    break;

    default: printf("Não existente!!");
    }
    float total = calprato + calsob + calbeb;
    printf("\nTotal de Calorias: %.2f", total);
}

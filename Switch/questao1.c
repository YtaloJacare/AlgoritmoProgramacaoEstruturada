#include<stdio.h>
#include<math.h>


//DDD's

main(){

    int num;

    printf("Digite o numero do seu DDD:");
    scanf("%d", &num);

    //estrutura 

    switch(num){

        case 61: printf("Brasilia - 061");
        break;

        case 71: printf("Salvador - 071");
        break;

        case 11: printf("Sao Paulo - 011");
        break;

        case 21: printf("Rio de Janeiro - 061");
        break;

        case 32: printf("Juiz de Fora - 032");
        break;

        case 19: printf("Campina - 019");
        break;

        case 27: printf("Vitoria - 027");
        break;

        case 31: printf("Belo Horizonte - 031");
        break;
        
        default: printf("Nao registrado, tu mora no acre??");
    }
}
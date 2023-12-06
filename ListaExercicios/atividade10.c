#include<stdio.h>
#include<math.h>

main()
{
    float sbase, vcomissao, totalv, tcomissao, tsalario;
    int carrosv;

    printf("\nEntre com o salario base do vendedor: ");
    scanf("%f",&sbase);

    printf("\nEntre com o valor da comissao por carro vendido: ");
    scanf("%f",&vcomissao);

    printf("\nEntre com o total de carros vendidos: ");
    scanf("%d",&carrosv);

    printf("\nEntre com o total de vendas: ");
    scanf("%f",&totalv);

    tcomissao = carrosv * vcomissao;
    tcomissao = tcomissao + ( totalv * 5/100 );

    tsalario = tcomissao + sbase;
    
    printf("\nO salario final do vendedor: %8.2f", tsalario);

}
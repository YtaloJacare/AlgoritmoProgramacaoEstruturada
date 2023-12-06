#include<stdio.h>
#include<math.h>

main(){

    int tempo;
    float salario;

    printf("Informe seu salario: ");
    scanf("%f", &salario);
    fflush(stdin);

    printf("Digite quantos anos voce atua pela empresa: ");
    scanf("%d", &tempo);
    fflush(stdin);


    if(salario <= 500 && tempo < 1){
        salario = salario + (salario * 0.25);
    }

    else if(salario <= 1000 && tempo >= 1 && tempo <= 3){
        salario = salario + (salario * 0.20);
    }

    else if(salario <= 1500 && tempo >= 4 && tempo <= 6){
        salario = salario + (salario * 0.15);
    }

    else if(salario <= 2000 && tempo >= 7 && tempo <= 10){
        salario = salario + (salario * 0.10);
    }

    else if(salario > 2000 && tempo > 10){
        salario = salario + 500.00;
    }

    printf("Seu salario reajustado sera: %.2f", salario);
}
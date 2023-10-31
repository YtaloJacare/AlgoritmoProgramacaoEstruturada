#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int diasMes(int mes){

    diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return diasMes[mes - 1];
}


main(){

int dia, mes, ano;
int diaAtual, mesAtual, anoAtual;

printf("Informe sua data de nascimento (Dia, Mes e ano):");
scanf("%d %d %d", &dia, &mes, &ano);

printf("\nInforme data atual (Dia, Mes e ano):");
scanf("%d %d %d", &diaAtual, &mesAtual, &anoAtual);


}
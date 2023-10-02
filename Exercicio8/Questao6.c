#include<stdio.h>
#include<math.h>

main(){

int ano, mes, dias;

while (1) {
    printf("Digite o mes (1-12) e o ano (ex: 02 2005): ");
    scanf("%d %d", &mes, &ano);

    if (mes < 1 || mes > 12) {
            printf("Mes invalido.\n");
            continue;
    }

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {

    switch (mes) {
    case 2:
    dias = 29;
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    dias = 30;
    break;

    default:
    dias = 31;
    break;

    }
    } else {

    switch (mes) {

    case 2:
    dias = 28;
    break;
    case 4: 
    case 6:
    case 9:
    case 11:
    dias = 30;
    break;

    default:
    dias = 31;
    break;

    }

    }

    printf("O mes %d/%d tem %d dias.\n", mes, ano, dias);

    char continuar;

    printf("Deseja Outras Entradas (S/?)?:");
    scanf(" %c", &continuar);

    if (continuar != 'S' && continuar != 's') {
        break;
        }
    }
  
}
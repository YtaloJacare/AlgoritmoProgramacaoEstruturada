#include<stdio.h>
#include<math.h>

//incompleto

main(){

int idade, contador_otimo = 0, contador_bom = 0, contador_regular = 0, contador_ruim = 0, contador_pessimo = 0;
int idade_ruim_total = 0, idade_otimo_max = -1, idade_ruim_max = -1;
int contador_geral = 0; 
char continuar;

printf("[Avaliacao - Black Cinemas Corporation]");
printf("\nInforme abaixo:");

do {
contador_geral++; 

    printf("\nResposta %d:", contador_geral);
    printf("\nIdade: ");
    scanf("%d", &idade);

    char opiniao;
    printf("\nOpiniao [A - Otimo ]- [B - Bom ]- [C - Regular ]- [D - Ruim ]-[E - Pessimo]: ");
    scanf(" %c", &opiniao);

    switch (opiniao) {

    case 'A':
    contador_otimo++;
    if (idade > idade_otimo_max) {
    idade_otimo_max = idade;
    }
    break;

    case 'B':
    contador_bom++;
    break;

    case 'C':
    contador_regular++;
    break;

    case 'D':
    contador_ruim++;
    idade_ruim_total += idade;

    if (idade > idade_ruim_max) {
        idade_ruim_max = idade;
    }
    break;

    case 'E':
    contador_pessimo++;
    break;

    default:

    printf("\nOpcao invalida.");

    contador_geral--; 
    continue; 

    }

    printf("\nDeseja continuar a pesquisa (S/N)? ");
    scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\nQuantidade de respostas Otimo: %d", contador_otimo);
    printf("\nDiferenca percentual entre respostas Bom e Regular: %.2f%%", (float)(contador_bom - contador_regular) / (contador_bom + contador_regular) * 100);
    
    if (contador_ruim > 0) {
        printf("\nMedia de idade das pessoas que responderam Ruim: %.2f", (float)idade_ruim_total / contador_ruim);
        printf("\nPercentagem de respostas Pessimo: %.2f%%", (float)contador_pessimo / contador_geral * 100);
        printf("\nMaior idade que utilizou a opcao Pessimo: %d", idade_ruim_max);
        if (idade_otimo_max != -1) {
            printf("\nDiferenca de idade entre a maior idade que respondeu Otimo e a maior idade que respondeu Ruim: %d", idade_otimo_max - idade_ruim_max);
        }
    } else {
        printf("\nNenhuma resposta Ruim.");
    }

    printf("\nContador geral de todas as pessoas cadastradas: %d", contador_geral);

}
#include<stdio.h>
#include<math.h>
#include <string.h>

main(){

int ddd;
int vei21, vei11, vei41, vei47, vei54;
int ac21, ac11, ac41, ac47, ac54;
int maior = 0, menor = 100;

char indiceMaior[50];
char indiceMenor[50];

int quanA = 0;
int acidentes;
int resp = 1;

do{
    quanA++;

printf("\nInforme seu codigo: \nRJ[21] \nSP[11] \nPR[41] \nSC[47] \nRS[54] \n-:");
scanf("%d", &ddd);

    if (ddd == 21){

        printf("\nQual a quantidade de veículos no RJ em 1992?:");
        scanf("%d", &vei21);
        printf("\nQual a quantidade de acidentes com vítimas?:");
        scanf("%d", &ac21);

            if(ac21 > maior) {
                maior = ac21;
                strcpy(indiceMaior, "RJ");
            }

            if(ac21 < menor) {
                menor = ac21;
                strcpy(indiceMenor, "RJ");
            }

        }
        else if (ddd == 11)
        {
        printf("\nQual a quantidade de veiculos em SP em 1992?:");
         scanf("%d", &vei11);

        printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac11);

            if(ac11 > maior) {
                maior = ac11;
                strcpy(indiceMaior, "SP");
            }

            if(ac11 < menor) {
                menor = ac11;
                strcpy(indiceMenor, "SP");
            }

        }
        else if (ddd == 41)
        {

        printf("\nQual a quantidade de veiculos no PR em 1992?:");
        scanf("%d", &vei41);

         printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac41);

            if(ac41 > maior) {
                maior = ac41;
                strcpy(indiceMaior, "PR");
            }

            if(ac41 < menor) {
                menor = ac41;
                strcpy(indiceMenor, "PR");
            }

        }
        else if (ddd == 47)
        {
        printf("\nQual a quantidade de veiculos em SC em 1992?:");
        scanf("%d", &vei47);

        printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac47);

            if(ac47 > maior) {
                maior = ac47;
                strcpy(indiceMaior, "SC");
            }

            if(ac47 < menor) {
                menor = ac47;
                strcpy(indiceMenor, "SC");
            }

        }
        else if (ddd == 54)
        {

        printf("\nQual a quantidade de veiculos no RS em 1992?:");
        scanf("%d", &vei54);

        printf("\nQual a quantidade de acidentes com vitimas?:");
        scanf("%d", &ac54);

            if(ac54 > maior) {
                maior = ac54;
                strcpy(indiceMaior, "RS");
            }

            if(ac21 < menor) {
                menor = ac54;
                strcpy(indiceMenor, "RS");
            }

        }

        printf("\nNovo registro? sim[1] / não[0]:");
        scanf("%d", &resp);

    } while (resp == 1);

float mediaV = (vei11+vei21+vei41+vei47+vei54)/5;
float mediaAcS = (ac54+ac47+ac41)/3;
    
printf("\nMaior indice de acidentes: %s com %d acidentes:", indiceMaior, maior);
printf("\nMenor indice de acidentes: %s com %d acidentes:", indiceMenor, menor);
printf("\nMédia de veículos nas ruas brasileiras: %.2f", mediaV);
printf("\nMédia de acidentes com vitima nas cidades do sul: %2.f", mediaAcS);

}
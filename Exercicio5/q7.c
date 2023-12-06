#include<stdio.h>
#include<math.h>

main(){

    float nota1, nota2, nota3, media;
    int peso1 = 1, peso2 = 2;

    printf("Digite a nota da prova 1:");
    scanf("%f", &nota1);
    fflush(stdin);

    printf("\nDigite a nota da prova 2:");
    scanf("%f", &nota2);
    fflush(stdin);

    printf("\nDigite a nota da prova 3:");
    scanf("%f", &nota3);
    fflush(stdin);

    media = (nota1 * peso1) + (nota2 * peso1) + (nota3 * peso2);
    float final = media / (peso1+peso2);

    printf("\nSua nota final: %.2f", final);

    if(media < 7){
        printf("\nVoce esta de recuperacao!!");
    }
    else if(media > 7){
        printf("\nVoce foi aprovado!!");
    }
}
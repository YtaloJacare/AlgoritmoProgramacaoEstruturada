#include<stdio.h>
#include<math.h>

main(){

char nomes[3][20];
float notas[3][3], soma, media;

for(int i = 0; i < 3; i++){

    printf("Digite o nome do aluno:");
    fgets(nomes[i], 20, stdin);
}

for(int i = 0; i < 3; i++){
    soma = 0;
    for(int c = 0; c < 3; c++){
        printf("\nDigite as notas:");
        scanf("%f", &notas[i][c]);
        soma += notas[i][c];
    }

    media = soma / 3;
    printf("\nAluno: %s", nomes[i]);
    printf("\nMedia: %f", media);
    printf("\n");
}

}
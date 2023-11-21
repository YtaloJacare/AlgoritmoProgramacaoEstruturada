#include<stdio.h>
#include<stdlib.h>

typedef struct{

    char nome[20];
    int idade;
    float nota;

}aluno;

main(){

aluno *a;
char rua[10];

rua = (char*)malloc(10* sizeof(char));


a = (aluno*)malloc(sizeof(aluno));

printf("Digite um nome:");
fgets(a->nome, sizeof(a->nome), stdin);

printf("\nDigite uma idade:");
scanf("%d",&a->idade);

printf("\nDigite a nota:");
scanf("%d",&a->nota);

printf("\nNome: %s", a->nome);
printf("\nIdade: %d", a->idade);
printf("\nNota: %.2f", a->nota);

rua = (char*)realloc(rua, 10 * sizeof(char));

free(a);

}
#include<stdio.h>
#include<stdlib.h>

typedef struct{

    char nome[20];
    int idade;
    float nota;

}aluno;


aluno* cadastrar(){

// alocar o endereco para gravar aluno
aluno *aluno1 = (aluno*)malloc(sizeof(aluno));

printf("Digite o nome do aluno:");
fflush(stdin);
fgets(aluno1->nome, sizeof(aluno1->nome), stdin);

printf("Digite a idade do aluno:");
fflush(stdin);
scanf("%d", &aluno1->idade);

printf("Digite a nota do aluno:");
fflush(stdin);
scanf("%.2f", &aluno1->nota);

return aluno1;
}

main(){

aluno * a;

a = cadastrar();

printf("\nNome: %s", a->nome);s
printf("\nIdade: %d", a->idade);
printf("\nNota: %.2f", a->nota);

free(a);

}
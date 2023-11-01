#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define TAM 3

//definição da struct (registro)

typedef struct {
//campos

char nome[25];
char matricula[15];
int turma;

}Aluno;



main(){
//criar variavel do tipo aluno

Aluno a[TAM];

for(int i = 0; i < TAM; i ++){
    printf("Infome o nome:");
    fgets(a[i].nome, sizeof(a[i].nome), stdin);
    fflush(stdin);


    printf("Infome a Matricula:");
    fgets(a[i].matricula, sizeof(a[i].matricula), stdin);
    fflush(stdin);

    printf("Infome a turma:");
    scanf("%d", &a[i].turma);
    fflush(stdin);

    printf("\n");
}

for(int i = 0; i < TAM; i ++){

    printf("\nAlunos: %s", a[i].nome);
    printf("\nMatricula: %s", a[i].matricula);
    printf("\nTurma: %d", a[i].turma);
}

}
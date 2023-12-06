#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "portuguese");
	char intro;
    char cadastro;
    char nome[50];
    int idade;
    int matricula [20];
    char ende[30];
    char curso[20];
    int periodo [20];
    char materias [30];
    float valor;
    
    printf("[------~Bem Vindo ao Cadastro!!~------]", intro);
    
    printf("\n Nome do Aluno:");
    scanf("%[^\n]", &nome);
    getchar();
    
    printf("\n Digite sua idade:");
    scanf("%d",&idade);
    getchar();
    
    printf("\n Digite sua Matricula:");
    scanf("%[^\n]",&matricula);
    getchar();
    
    
    printf("\n Endereco:");
    scanf("%[^\n]",&ende);
    getchar();
    
    printf("\n Formando qual curso?:");
    scanf("%[^\n]",&curso);
    getchar();
    
    printf("\n Periodo:");
    scanf("%[^\n]",&periodo);
    getchar();
    
    printf("\n Disciplinas:");
    scanf("%[^\n]",&materias);
    getchar();
    
    printf("\n Valor da Mensalidade:");
    scanf("%f",&valor);
    getchar();
    
    printf("\n Nome: %s", nome);
    printf("\n Idade: %d", idade);
    printf("\n Matricula: %s", matricula);
    printf("\n Endereco: %s", ende);
    printf("\n Cursando: %s", curso);
    printf("\n Periodo: %s", periodo);
    printf("\n Disciplinas: %s", materias);
    printf("\n Mensalidade: %.2f", valor);
    
    
}

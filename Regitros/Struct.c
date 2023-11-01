#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

//definição da struct (registro)

struct pessoa{

char nome[20];
int idade;
int cpf;
float salario;

};


typedef struct{

char rua[20];
int numero;

}Endereco;


main(){

//criar um variavel do tipo struct

struct pessoa p1;
Endereco end;

//inserir informações no registro

p1.idade = 25;
strcpy(p1.nome, "Cleyton");
p1.cpf = 123456;
p1.salario = 1000.0;


// mostrando os dados



printf("\nNome: %s", p1.nome);
printf("\nIdade: %d", p1.idade);
printf("\nCPF: %d", p1.cpf);
printf("\nSalario: %.2f", p1.salario);

printf("\nInforme a rua: ");
fgets(end.rua, sizeof(end.rua), stdin);

printf("\nInforme o numero: \n");
scanf("%d", &end.numero);

fflush(stdin);

printf("\nRua: %s", end.rua);
fflush(stdin);

printf("\nNumero: %d", end.numero);

}
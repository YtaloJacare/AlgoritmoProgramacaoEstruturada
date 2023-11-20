#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//incompleto

typedef struct {

char sexo [500];
float salario;
int id;

} dados;


void cadastrar(dados d[], int indice){

    srand(time(0));
    d[indice].id = rand() % 100;
    d[indice].status= 1;


}



main(){

printf("[-----Cadastro-----]");

int opcaoMenu;

do{

    printf("\n 1 - Cadastrar");
    printf("\n 2 - Listar");
    printf("\n 0 - Sair:");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu){

    case 1: 

    cadastrar(d, totalPessoas);

    break;

    case 2: 
        
    listar(d, totalPessoas);

    break;

    }

} while(opcaoMenu != 0);


}
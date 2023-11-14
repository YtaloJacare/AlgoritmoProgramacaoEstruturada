#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#define TAM_MAX 3

typedef struct {

int idade;   
int id;
int vac;
int status;
char nome [40];
char email [500];
char sexo [20];
char ende [40];
double alt;

} Pessoa ;

//função


void cadastrar(Pessoa p[], int indice){

    srand(time(0));
    p[indice].id = rand() % 100;
    p[indice].status= 1;

    printf("\nInforme o nome:");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    
    fflush(stdin);

    printf("\nInforme a idade:");
    fflush(stdin);
    scanf("%d", &p[indice].idade);


}

void listar(Pessoa p[], int totalPessoas){

for(int i = 0; i < totalPessoas; i++){

printf("\nId: %d", p[i].id);
printf("\nNome: %s", p[i].nome);
printf("\nIdade: %d", p[i].idade);

p[i].status == 1 ? printf("\nAtivo!"): printf("\nInativo!");

}

}


void buscar(Pessoa p[], int totalPessoas){

if(totalPessoas == 0){

    printf("Lista Vazia!");
    return;
} else{

    for(int i = 0; i < totalPessoas; i++){
        if(p.[i].id == id){
            //achou o registro
            printf("Nome: %s", p[i].nome);
            p[i].status == 1 ? printf("\nAtivo!"): printf("\nInativo!");

            return;
        }

    }   

}

    printf("Não Encontrado!!");
}

main(){

Pessoa p[TAM_MAX];


int opcaoMenu, totalPessoas = 0;
int buscarID;

printf("[-------Cadastro-------]");
printf("\n\n");


do{

    printf("\n 1 - Cadastro");
    printf("\n 2 - Listar");
    printf("\n 3 - Buscar");
    printf("\n 4 - Excluir");
    printf("\n 0 - Sair:");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu){

    case 1: 

        if(totalPessoas < 3){

            cadastrar(p, totalPessoas);
            totalPessoas ++;

        } else {
            printf("Limite atingido!");
        }

    break;

    case 2: 
        
        listar(p, totalPessoas);

    break;

    case 3: 
        
        printf("Informe o ID:");
        scanf("%d", &buscarID);
        buscar(p, totalPessoas, buscarID);

    break;

    }

} while(opcaoMenu != 0);



}

